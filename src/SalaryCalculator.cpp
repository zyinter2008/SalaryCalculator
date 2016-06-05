/*
 * salarycalculator.cpp
 *
 *  Created on: 2016��4��30��
 *      Author: zyin
 */

#include "salarycalculator.h"

bool SalaryCalculator::IsOddSeason(unsigned int month) {
	return month == 1 || month == 2 || month == 3 || month == 7 || month == 8
			|| month == 9;
}

bool SalaryCalculator::IsEvenSeason(unsigned int month) {
	return month == 4 || month == 5 || month == 6 || month == 10 || month == 11
			|| month == 12;
}

bool SalaryCalculator::IsOddMonth(unsigned int month) {
	return month == 1 || month == 3 || month == 5 || month == 7 || month == 9
			|| month == 11;
}

bool SalaryCalculator::IsEvenMonth(unsigned int month) {
	return month == 2 || month == 4 || month == 6 || month == 8 || month == 10
			|| month == 12;
}

bool SalaryCalculator::IsFirstHalfMonth(unsigned int month) {
	return month == 1 || month == 2 || month == 3 || month == 6 || month == 5
			|| month == 6;
}

bool SalaryCalculator::IsSecondHalfMonth(unsigned int month) {
	return month == 7 || month == 8 || month == 9 || month == 10 || month == 11
			|| month == 12;
}

unsigned int SalaryCalculator::getSalary(string name, unsigned int month) {
	if (name == "xiren") {
		if (IsOddSeason(month)) {
			return 24000;
		}
		if (IsEvenSeason(month)) {
			return 28000;
		}

	} else if (name == "qingwen") {
		if (IsOddMonth(month))
			return 9000;
		if (IsEvenMonth(month))
			return 8000;
	} else if (name == "sheyue") {
		if (IsFirstHalfMonth(month)) {
			return 3200;
		}
		if (IsSecondHalfMonth(month)) {
			return 3800;
		}
	}

}

