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

using namespace std;

#include "worker.h"
#include "master.h"

const string  WORKER_XI_REN="xiren";
const string  WORKER_QING_WEN="qingwen";
const string  WORKER_SHE_YUE="sheyue";
const string  MASTER_BAO_YU="baoyu";
const string  MASTER_JIA_MU="jiamu";
const string  MASTER_JIA_ZHENG="jiazheng";

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
