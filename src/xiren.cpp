/*
 * xiren.cpp
 *
 *  Created on: 2016年6月9日
 *      Author: zyin
 */

#include "xiren.h"

unsigned int XiRen::getSeason(unsigned int month) {
	return (month - 1) / 3 + 1;
}

bool XiRen::IsOddSeason(unsigned int month) {
	return getSeason(month) == 1 || getSeason(month) == 3;
}

unsigned int XiRen::getBasicSalary(unsigned int month) {
	return IsOddSeason(month) ? 1000 : 1500;
}
unsigned int XiRen::getBonus(unsigned int month) {
	return 2000;
}
