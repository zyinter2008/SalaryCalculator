/*
 * mockworker.h
 *
 *  Created on: 2016年7月10日
 *      Author: zyin
 */

#ifndef MOCKWORKER_H_
#define MOCKWORKER_H_

#include "gmock/gmock.h"
#include "worker.h"

class MockWorker :public Worker{
	public:
	MOCK_METHOD1(getBasicSalary, unsigned int(unsigned int month));
	MOCK_METHOD1(getBonus, unsigned int(unsigned int month));

};


#endif /* MOCKWORKER_H_ */
