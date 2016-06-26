/*
 * daiyu.h
 *
 *  Created on: 2016年6月26日
 *      Author: zyin
 */

#ifndef DAIYU_H_
#define DAIYU_H_

#include "master.h"

class DaiYu: public Master {
public:
	DaiYu() {
	}
	;
	~ DaiYu() {
	}
	;

	unsigned int getSalary(unsigned int basicSalary, unsigned int bonus);
};

#endif /* DAIYU_H_ */
