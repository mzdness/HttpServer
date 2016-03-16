/*
 * conn.h
 *
 *  Created on: Mar 15, 2016
 *      Author: pzw
 */

#ifndef CONN_H_
#define CONN_H_

#include <event2/event.h>
#include <event2/event_compat.h>
#include <event2/event_struct.h>
#include <event2/buffer.h>
#include <string>

enum conn_s
{
	CLOSED_BY_PEER,
	NORMAL
};

class conn {
public:
	conn();
	conn(event_base* , int , event_callback_fn , event_callback_fn );
	virtual ~conn();

	int send(char* );
	int recv(std::string &);
	void disconn();
	int open_tar_file(std::string &);
	int get_tar_file_size();
	int set_tar_file_offset(int );
	int read_file_to_buf(char * , size_t );

private:
	int conn_fd;
	evbuffer* input;
	evbuffer* output;
	event* ev_in;
	event* ev_out;
	event_base* conn_base;
	int target_file_fd;
	int target_file_size;
};


#endif /* CONN_H_ */
