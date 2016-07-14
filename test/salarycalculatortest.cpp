#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "salarycalculator.h"
#include "mockmaster.h"
#include "mockworker.h"

using namespace testing;

TEST(MasterTest, should_master_pay_worker_8800_when_worker_has_600_basic_salary_and_500_bonus) {
	SalaryCalculator calc;
	MockWorker *worker = new MockWorker();
	MockMaster *master = new MockMaster();

	calc.setWorkers("worker", worker);
	calc.setMasters("master", master);

	EXPECT_CALL(*worker, getBasicSalary(1)).WillOnce(Return(600));
	EXPECT_CALL(*worker, getBonus(1)).WillOnce(Return(500));

	EXPECT_CALL(*master, getSalary(600, 500)).WillOnce(Return(8800));

	ASSERT_EQ(8800, calc.getSalary("worker", "master", 1));
}
