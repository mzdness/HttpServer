//============================================================================
// Name        : P2P_transfer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <pthread.h>
#include "tcp_server.h"
using namespace std;




net_work_queue net_work_mgr;

void *worker_main(void *parg)
{
	ifstream file_to_send;
	size_t file_size;
	vector<bool> has_segment;
	cout<<"worker thread init!"<<endl;
	return 0;
}

void start_send()
{
	tcp_server ts("9876"); // set up a listen of port 9876

    pthread_t worker_id;
    int worker_create_ret = pthread_create(&worker_id,NULL,worker_main,NULL);
    if (worker_create_ret)
	{
		cerr << "cannot allocate worker!"<<endl;
	}

	int conn_fd;
	ts.accept_conn(net_work_mgr); // begin dispatching







	pthread_join(worker_id,NULL);
	return;
}

void start_receive()
{;}


int main(int argc, char* argv[]) {
	string option (argv[1]);

	if (option == "-tx")
		start_send();
	else
		start_receive();

	return 0;
}
