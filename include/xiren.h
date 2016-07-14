/*
 * xiren.h
 *
 *  Created on: 2016年6月9日
 *      Author: zyin
 */

#ifndef XIREN_H_
#define XIREN_H_

#include "worker.h"

class XiRen: public Worker {
public:
	XiRen() {
	}
	;
	~ XiRen() {
	}
	;

	unsigned int getBasicSalary(unsigned int month);
	unsigned int getBonus(unsigned int month);
private:
	bool IsOddSeason(unsigned int month);
	unsigned int getSeason(unsigned int month);
};

#endif /* XIREN_H_ */
