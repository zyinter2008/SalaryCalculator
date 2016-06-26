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


TEST(SalaryCalculatorTest, should_return_8000_when_xiren_for_jiazheng_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(8000, calc.getSalary(WORKER_XI_REN,MASTER_JIA_ZHENG, 1));
}

TEST(SalaryCalculatorTest, should_return_4000_when_xueyan_for_daiyu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(4000, calc.getSalary(WORKER_XUE_YAN,MASTER_DAI_YU, 1));
}

TEST(SalaryCalculatorTest, should_return_4000_when_wangmomo_for_daiyu_get_salary_of_jan) {
	SalaryCalculator calc;
	ASSERT_EQ(5500, calc.getSalary(WORKER_WANG_MO_MO,MASTER_DAI_YU, 1));
}
