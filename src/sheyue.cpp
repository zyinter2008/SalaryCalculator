/*
 * sheyue.cpp
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#include "sheyue.h"

bool SheYue::IsFirstHalfMonth(unsigned int month) {
	return (month - 1) / 6 == 0;
}

unsigned int SheYue::getBasicSalary(unsigned int month) {
	return 600;
}
unsigned int SheYue::getBonus(unsigned int month) {
	return IsFirstHalfMonth(month) ? 400 : 700;
}
