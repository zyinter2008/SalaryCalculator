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

SalaryCalculator::SalaryCalculator() {
	workers[WORKER_XI_REN] = new XiRen();
	workers[WORKER_QING_WEN] = new QingWen();
	workers[WORKER_SHE_YUE] = new SheYue();
}

SalaryCalculator::~SalaryCalculator() {
	for (map<string, Workers*>::const_iterator it = workers.begin();
			it != workers.end(); it++) {
		delete it->second;
	}
}

unsigned int SalaryCalculator::getSalary(string name, unsigned int month) {
	return workers[name]->getSalary(month);
}

