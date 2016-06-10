/*
 * workers.h
 *
 *  Created on: 2016年6月9日
 *      Author: zyin
 */

#ifndef WORKERS_H_
#define WORKERS_H_

class Workers {
public:
	Workers(){};
	virtual ~Workers(){};

	virtual unsigned int getSalary(unsigned int month)=0;
};

#endif /* WORKERS_H_ */
