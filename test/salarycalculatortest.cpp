#include "gtest/gtest.h"
#include "salarycalculator.h"

class CalculatorParam {

public:
	string master;
	string worker;
	unsigned int month;
	unsigned int salary;

	CalculatorParam(const string &master, const string &worker,
			unsigned int month, unsigned int salary) :
			master(master), worker(worker), month(month), salary(salary) {
	}

};

class SalaryCalculatorTest: public testing::TestWithParam<CalculatorParam> {

};

TEST_P(SalaryCalculatorTest, test_get_salary) {
	CalculatorParam testPara = GetParam();
	SalaryCalculator calc;
	ASSERT_EQ(testPara.salary,
			calc.getSalary(testPara.worker, testPara.master, testPara.month));
}

INSTANTIATE_TEST_CASE_P(SalaryCalculatorTest, SalaryCalculatorTest,
		testing::Values(
				CalculatorParam(MASTER_BAO_YU, WORKER_XI_REN, 1, 24000),
				CalculatorParam(MASTER_BAO_YU, WORKER_XI_REN, 4, 28000),
				CalculatorParam(MASTER_BAO_YU, WORKER_QING_WEN, 1, 11200),
				CalculatorParam(MASTER_BAO_YU, WORKER_QING_WEN, 2, 10400),
				CalculatorParam(MASTER_BAO_YU, WORKER_SHE_YUE, 1, 8000),
				CalculatorParam(MASTER_BAO_YU, WORKER_SHE_YUE, 7, 10400),
				CalculatorParam(MASTER_JIA_MU, WORKER_XI_REN, 1, 20000),
				CalculatorParam(MASTER_JIA_ZHENG, WORKER_XI_REN, 1, 8000),
				CalculatorParam(MASTER_DAI_YU, WORKER_XUE_YAN, 1, 4000),
				CalculatorParam(MASTER_DAI_YU, WORKER_WANG_MO_MO, 1, 5500)
				));
