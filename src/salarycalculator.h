/*
 * salarycalculator.h
 *
 *  Created on: 2016��4��30��
 *      Author: zyin
 */

#ifndef SALARYCALCULATOR_H_
#define SALARYCALCULATOR_H_

#include <string>
#include <map>
#include "workers.h"

#define WORKER_XI_REN "xiren"
#define WORKER_QING_WEN "qingwen"
#define WORKER_SHE_YUE "sheyue"

using namespace std;

class SalaryCalculator {
public:
	SalaryCalculator() ;
	~ SalaryCalculator();
	unsigned int getSalary(string name, unsigned int month);

private:
	map<string, Workers*> workers;
};

#endif /* SALARYCALCULATOR_H_ */
