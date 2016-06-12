/*
 * baoyu.h
 *
 *  Created on: 2016年6月12日
 *      Author: zyin
 */

#ifndef BAOYU_H_
#define BAOYU_H_

#include "master.h"

class BaoYu: public Master {
public:
	BaoYu() {
	}
	;
	~BaoYu() {
	}
	;
private:
	unsigned int getSalary(unsigned int basicSalary, unsigned int bonus);
};

#endif /* BAOYU_H_ */
