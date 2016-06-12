/*
 * master.h
 *
 *  Created on: 2016年6月12日
 *      Author: zyin
 */

#ifndef MASTER_H_
#define MASTER_H_

class Master {
public:
	Master() {
	}
	;
	virtual ~Master() {
	}
	;

	virtual unsigned int getSalary(unsigned int basicSalary, unsigned int bonus)=0;
};

#endif /* MASTER_H_ */
