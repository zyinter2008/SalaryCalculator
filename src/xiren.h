/*
 * xiren.h
 *
 *  Created on: 2016年6月9日
 *      Author: zyin
 */

#ifndef XIREN_H_
#define XIREN_H_

#include "workers.h"

class XiRen :public Workers {
public:
	XiRen(){};
	~ XiRen(){};
private:
	unsigned int getSalary(unsigned int month);
	bool IsOddSeason(unsigned int month);
	unsigned int getSeason(unsigned int month);
};

#endif /* XIREN_H_ */
