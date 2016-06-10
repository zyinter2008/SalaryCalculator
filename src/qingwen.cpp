/*
 * qingwen.cpp
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#include "qingwen.h"

unsigned int QingWen::getSalary(unsigned int month) {
	return IsOddMonth(month) ? 9000 : 8000;
}

bool QingWen::IsOddMonth(unsigned int month) {
	return month % 2 == 1;
}
