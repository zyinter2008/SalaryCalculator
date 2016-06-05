/*
 * salarycalculator.h
 *
 *  Created on: 2016��4��30��
 *      Author: zyin
 */

#ifndef SALARYCALCULATOR_H_
#define SALARYCALCULATOR_H_

#include <string>

using namespace std;

class SalaryCalculator {
public:
	unsigned int getSalary(string name, unsigned int month);

private:
	bool IsOddSeason(unsigned int month);
	bool IsEvenSeason(unsigned int month);
	bool IsOddMonth(unsigned int month);
	bool IsEvenMonth(unsigned int month);
	bool IsFirstHalfMonth(unsigned int month);
	bool IsSecondHalfMonth(unsigned int month);
};

#endif /* SALARYCALCULATOR_H_ */
