/*
 * qingwen.h
 *
 *  Created on: 2016年6月10日
 *      Author: zyin
 */

#ifndef QINGWEN_H_
#define QINGWEN_H_

#include "worker.h"

class QingWen: public Worker {
public:
	QingWen(){};
	~QingWen(){};
private:
	unsigned int getSalary(unsigned int month);
	bool IsOddMonth(unsigned int month);

};

#endif /* QINGWEN_H_ */
