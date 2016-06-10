/*
 * sheyue.cpp
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#include "sheyue.h"

unsigned int SheYue::getSalary(unsigned int month) {
	return IsFirstHalfMonth(month) ? 3200 : 3800;
}

bool SheYue::IsFirstHalfMonth(unsigned int month) {
	return (month - 1) / 6 == 0;
}
