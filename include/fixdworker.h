/*
 * fixdworker.h
 *
 *  Created on: 2016年6月26日
 *      Author: zyin
 */

#ifndef FIXDWORKER_H_
#define FIXDWORKER_H_

#include "worker.h"

class FixdWorker: public Worker {
public:
	FixdWorker(unsigned int basicSalary) :
			basicSalary(basicSalary) {
	}
	;
	~ FixdWorker() {
	}
	;

	unsigned int getBasicSalary(unsigned int month);
	unsigned int getBonus(unsigned int month);

	unsigned int basicSalary;
};

#endif /* FIXDWORKER_H_ */
