/*
 * jiamu.h
 *
 *  Created on: 2016年6月12日
 *      Author: zyin
 */

#ifndef JIAMU_H_
#define JIAMU_H_

#include "master.h"

class JiaMu: public Master {
public:
	JiaMu(){};
	~JiaMu(){};
private:
	unsigned int getSalary(unsigned int basicSalary, unsigned int bonus);
};

#endif /* JIAMU_H_ */
