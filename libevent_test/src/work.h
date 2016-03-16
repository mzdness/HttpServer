/*
 * work.h
 *
 *  Created on: Mar 15, 2016
 *      Author: pzw
 */

#ifndef WORK_H_
#define WORK_H_

#include "conn.h"

enum status_e
{
	READ = 0,
	CLOSE,
	CONNECTED,
	ERROR
};

class work {
public:
	work():this_conn(NULL),status(ERROR){};
	work(conn * pconn, status_e s);
	virtual ~work() = default;

	conn* get_this_conn();

private:
	conn* this_conn;
	status_e status;
};


#endif /* WORK_H_ */
