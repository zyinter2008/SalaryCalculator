/*
 * salarycalculator.cpp
 *
 *  Created on: 2016��4��30��
 *      Author: zyin
 */

#include "salarycalculator.h"

unsigned int SalaryCalculator::getSeason(unsigned int month) {
	return (month - 1) / 3 + 1;
}

bool SalaryCalculator::IsOddSeason(unsigned int month) {
	return getSeason(month) == 1 || getSeason(month) == 3;
}

bool SalaryCalculator::IsOddMonth(unsigned int month) {
	return month % 2 == 1;
}

bool SalaryCalculator::IsFirstHalfMonth(unsigned int month) {
	return (month - 1) / 6 == 0;
}

unsigned int SalaryCalculator::getSalary(string name, unsigned int month) {
	if (name == "xiren") {
		return IsOddSeason(month) ? 24000 : 28000;
	} else if (name == "qingwen") {
		return IsOddMonth(month) ? 9000 : 8000;
	} else if (name == "sheyue") {
		return IsFirstHalfMonth(month) ? 3200 : 3800;
	}
	return 0;
}

