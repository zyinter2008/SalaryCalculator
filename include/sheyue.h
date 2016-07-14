/*
 * sheyue.h
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#ifndef SHEYUE_H_
#define SHEYUE_H_

#include "worker.h"

class SheYue: public Worker {
public:
	SheYue() {
	}
	;
	~SheYue() {
	}
	;

	unsigned int getBasicSalary(unsigned int month);
		unsigned int getBonus(unsigned int month);
private:
	bool IsFirstHalfMonth(unsigned int month);
};

#endif /* SHEYUE_H_ */
