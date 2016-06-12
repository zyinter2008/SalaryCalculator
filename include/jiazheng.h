/*
 * jiazheng.h
 *
 *  Created on: 2016年6月12日
 *      Author: zyin
 */

#ifndef JIAZHENG_H_
#define JIAZHENG_H_

#include "master.h"

class JiaZheng: public Master {
public:
	JiaZheng(){};
	~JiaZheng(){};
private:
	unsigned int getSalary(unsigned int basicSalary, unsigned int bonus);
};

#endif /* JIAZHENG_H_ */
