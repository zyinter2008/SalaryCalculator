/*
 * qingwen.cpp
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#include "qingwen.h"

bool QingWen::IsOddMonth(unsigned int month) {
	return month % 2 == 1;
}

unsigned int QingWen::getBasicSalary(unsigned int month) {
	return IsOddMonth(month) ? 900 : 800;
}
unsigned int QingWen::getBonus(unsigned int month) {
	return 500;
}
