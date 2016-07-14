/*
 * mockmaster.h
 *
 *  Created on: 2016年7月10日
 *      Author: zyin
 */

#ifndef MOCKMASTER_H_
#define MOCKMASTER_H_

#include "gmock/gmock.h"
#include "master.h"

class MockMaster :public Master{
	public:
	MOCK_METHOD2(getSalary, unsigned int(unsigned int basicSalary, unsigned int bonus));
};



#endif /* MOCKMASTER_H_ */
