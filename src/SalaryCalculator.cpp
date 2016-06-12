/*
 * salarycalculator.cpp
 *
 *  Created on: 2016��4��30��
 *      Author: zyin
 */

#include "salarycalculator.h"
#include "xiren.h"
#include "qingwen.h"
#include "sheyue.h"
#include "baoyu.h"
#include "jiamu.h"
#include "jiazheng.h"

SalaryCalculator::SalaryCalculator() {
	workers[WORKER_XI_REN] = new XiRen();
	workers[WORKER_QING_WEN] = new QingWen();
	workers[WORKER_SHE_YUE] = new SheYue();
	masters[MASTER_BAO_YU] = new BaoYu();
	masters[MASTER_JIA_MU] = new JiaMu();
	masters[MASTER_JIA_ZHENG] = new JiaZheng();
}

SalaryCalculator::~SalaryCalculator() {
	for (map<string, Worker*>::const_iterator it = workers.begin();
			it != workers.end(); it++) {
		delete it->second;
	}
	for (map<string, Master*>::const_iterator it = masters.begin();
			it != masters.end(); it++) {
		delete it->second;
	}
}

unsigned int SalaryCalculator::getSalary(string worker, string master,
		unsigned int month) {
	return masters[master]->getSalary(workers[worker]->getBasicSalary(month),
			workers[worker]->getBonus(month));
}

