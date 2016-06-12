/*
 * jiamu.cpp
 *
 *  Created on: 2016年6月12日
 *      Author: zyin
 */

#include "jiamu.h"

unsigned int JiaMu::getSalary(unsigned int basicSalary, unsigned int bonus) {
	return basicSalary > bonus ? basicSalary * 10 : bonus * 10;
}
