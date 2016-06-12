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

#include "worker.h"
#include "master.h"

#define WORKER_XI_REN "xiren"
#define WORKER_QING_WEN "qingwen"
#define WORKER_SHE_YUE "sheyue"
#define MASTER_BAO_YU "baoyu"
#define MASTER_JIA_MU "jiamu"
#define MASTER_JIA_ZHENG "jiazheng"

using namespace std;

class SalaryCalculator {
public:
	SalaryCalculator() ;
	~ SalaryCalculator();
	unsigned int getSalary(string worker, string master, unsigned int month);

private:
	map<string, Worker*> workers;
	map<string, Master*> masters;
};

#endif /* SALARYCALCULATOR_H_ */
