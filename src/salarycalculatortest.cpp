#include "gtest/gtest.h"
#include "salarycalculator.h"

TEST(SalaryCalculatorTest, should_return_24000_when_xiren_for_baoyu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(24000, calc.getSalary(WORKER_XI_REN,MASTER_BAO_YU, 1));
}

TEST(SalaryCalculatorTest, should_return_28000_when_xiren_for_baoyu_get_salary_of_april) {
	SalaryCalculator calc;
	ASSERT_EQ(28000, calc.getSalary(WORKER_XI_REN,MASTER_BAO_YU,4));
}

TEST(SalaryCalculatorTest, should_return_11200_when_qingwen_for_baoyu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(11200, calc.getSalary(WORKER_QING_WEN,MASTER_BAO_YU, 1));
}

TEST(SalaryCalculatorTest, should_return_10400_when_qingwen_for_baoyu_get_salary_of_feb) {
	SalaryCalculator calc;
	ASSERT_EQ(10400, calc.getSalary(WORKER_QING_WEN,MASTER_BAO_YU, 2));
}

TEST(SalaryCalculatorTest, should_return_8000_when_sheyue_for_baoyu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(8000, calc.getSalary(WORKER_SHE_YUE,MASTER_BAO_YU, 1));
}

TEST(SalaryCalculatorTest, should_return_10400_when_sheyue_for_baoyu_get_salary_of_july) {
	SalaryCalculator calc;
	ASSERT_EQ(10400, calc.getSalary(WORKER_SHE_YUE,MASTER_BAO_YU, 7));
}

TEST(SalaryCalculatorTest, should_return_20000_when_xiren_for_jiamu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(20000, calc.getSalary(WORKER_XI_REN,MASTER_JIA_MU, 1));
}

TEST(SalaryCalculatorTest, should_return_20000_when_xiren_for_jiamu_get_salary_of_april) {
	SalaryCalculator calc;
	ASSERT_EQ(20000, calc.getSalary(WORKER_XI_REN,MASTER_JIA_MU ,4));
}

TEST(SalaryCalculatorTest, should_return_9000_when_qingwen_for_jiamu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(9000, calc.getSalary(WORKER_QING_WEN,MASTER_JIA_MU, 1));
}

TEST(SalaryCalculatorTest, should_return_8000_when_qingwen_for_jiamu_get_salary_of_feb) {
	SalaryCalculator calc;
	ASSERT_EQ(8000, calc.getSalary(WORKER_QING_WEN,MASTER_JIA_MU ,2));
}

TEST(SalaryCalculatorTest, should_return_8000_when_xiren_for_jiazheng_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(8000, calc.getSalary(WORKER_XI_REN,MASTER_JIA_ZHENG, 1));
}

TEST(SalaryCalculatorTest, should_return_10000_when_xiren_for_jiazheng_get_salary_of_april) {
	SalaryCalculator calc;
	ASSERT_EQ(10000, calc.getSalary(WORKER_XI_REN,MASTER_JIA_ZHENG, 4));
}

TEST(SalaryCalculatorTest, should_return_3200_when_sheyue_for_jiazheng_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(3200, calc.getSalary(WORKER_SHE_YUE,MASTER_JIA_ZHENG, 1));
}

TEST(SalaryCalculatorTest, should_return_3800_when_sheyue_for_jiazheng_get_salary_of_july) {
	SalaryCalculator calc;
	ASSERT_EQ(3800, calc.getSalary(WORKER_SHE_YUE,MASTER_JIA_ZHENG, 7));
}
