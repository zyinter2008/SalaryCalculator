/*
 * worker.h
 *
 *  Created on: 2016年6月9日
 *      Author: zyin
 */

#ifndef WORKER_H_
#define WORKER_H_

class Worker {
public:
	Worker() {
	}
	;
	virtual ~Worker() {
	}
	;

	virtual unsigned int getBasicSalary(unsigned int month)=0;
	virtual unsigned int getBonus(unsigned int month)=0;
};

#endif /* WORKER_H_ */
