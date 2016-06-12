#include "gtest/gtest.h"
#include "salarycalculator.h"

TEST(SalaryCalculatorTest, should_return_24000_when_xiren_for_baoyu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(24000, calc.getSalary(WORKER_XI_REN, 1));
}

TEST(SalaryCalculatorTest, should_return_28000_when_xiren_for_baoyu_get_salary_of_april) {
	SalaryCalculator calc;
	ASSERT_EQ(28000, calc.getSalary(WORKER_XI_REN, 4));
}

TEST(SalaryCalculatorTest, should_return_9000_when_qingwen_for_jiamu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(9000, calc.getSalary(WORKER_QING_WEN, 1));
}

TEST(SalaryCalculatorTest, should_return_8000_when_qingwen_for_jiamu_get_salary_of_feb) {
	SalaryCalculator calc;
	ASSERT_EQ(8000, calc.getSalary(WORKER_QING_WEN, 2));
}

TEST(SalaryCalculatorTest, should_return__when_sheyue_for_jiazheng_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(3200, calc.getSalary(WORKER_SHE_YUE, 1));
}

TEST(SalaryCalculatorTest, should_return__when_sheyue_for_jiazheng_get_salary_of_feb) {
	SalaryCalculator calc;
	ASSERT_EQ(3800, calc.getSalary(WORKER_SHE_YUE, 7));
}
