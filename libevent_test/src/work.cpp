/*
 * work.cpp
 *
 *  Created on: Mar 15, 2016
 *      Author: pzw
 */

#include "work.h"

work::work(conn * pconn, status_e s){
	this_conn = pconn;
	status = s;
}

conn* work::get_this_conn()
{
	return this_conn;
}
