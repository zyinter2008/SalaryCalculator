/*
 * wokertest.cpp
 *
 *  Created on: 2016年7月10日
 *      Author: zyin
 */

#include "gtest/gtest.h"
#include "xiren.h"
#include "qingwen.h"
#include "sheyue.h"
#include "fixdworker.h"

TEST(WorkerTest, should_xiren_get_1000_basic_salary_and_2000_bonus_in_month_jan){
	XiRen xiren;
	ASSERT_EQ(1000, xiren.getBasicSalary(1));
	ASSERT_EQ(2000, xiren.getBonus(1));
}

TEST(WorkerTest, should_xiren_get_1500_basic_salary_and_2000_bonus_in_month_april){
	XiRen xiren;
	ASSERT_EQ(1500, xiren.getBasicSalary(4));
	ASSERT_EQ(2000, xiren.getBonus(4));
}
TEST(WorkerTest, should_qingwen_get_900_basic_salary_and_500_bonus_in_month_jan){
	QingWen qingwen;
	ASSERT_EQ(900, qingwen.getBasicSalary(1));
	ASSERT_EQ(500, qingwen.getBonus(1));
}

TEST(WorkerTest, should_qingwen_get_800_basic_salary_and_500_bonus_in_month_feb){
	QingWen qingwen;
	ASSERT_EQ(800, qingwen.getBasicSalary(2));
	ASSERT_EQ(500, qingwen.getBonus(2));
}
TEST(WorkerTest, should_sheyue_get_600_basic_salary_and_400_bonus_in_month_jan){
	SheYue sheyue;
	ASSERT_EQ(600, sheyue.getBasicSalary(1));
	ASSERT_EQ(400, sheyue.getBonus(1));
}

TEST(WorkerTest, should_sheyue_get_600_basic_salary_and_700_bonus_in_month_july){
	SheYue sheyue;
	ASSERT_EQ(600, sheyue.getBasicSalary(7));
	ASSERT_EQ(700, sheyue.getBonus(7));
}

TEST(WorkerTest, should_fixdworker_only_get_basic_salary){
	FixdWorker worker(500);
	ASSERT_EQ(500, worker.getBasicSalary(7));
	ASSERT_EQ(0, worker.getBonus(7));
}

