/*
 * sheyue.h
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#ifndef SHEYUE_H_
#define SHEYUE_H_

#include "workers.h"

class SheYue: public Workers {
public:
	SheYue(){};
	~SheYue(){};
private:
	unsigned int getSalary(unsigned int month);
	bool IsFirstHalfMonth(unsigned int month);
};

#endif /* SHEYUE_H_ */
