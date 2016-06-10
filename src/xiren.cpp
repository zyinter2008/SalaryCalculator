/*
 * xiren.cpp
 *
 *  Created on: 2016年6月9日
 *      Author: zyin
 */

#include "xiren.h"

unsigned int XiRen::getSalary(unsigned int month) {
	return IsOddSeason(month) ? 24000 : 28000;
}

unsigned int XiRen::getSeason(unsigned int month) {
	return (month - 1) / 3 + 1;
}

bool XiRen::IsOddSeason(unsigned int month) {
	return getSeason(month) == 1 || getSeason(month) == 3;
}
