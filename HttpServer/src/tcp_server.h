#include <unistd.h>
#include <iostream>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <arpa/inet.h>
#include <errno.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <fcntl.h>

#define MAXSIZE 4096
#define MAX_EP_EVENTS 5

class tcp_server
{
private:
	int socket_fd;
	int accept_fd;
	struct sockaddr_in host_addr;
	struct sockaddr_in rmt_addr;

	fd_set server_fdset;
	int max_fd;
	struct timeval timeout;
	int client_fd[3];
	int cur_conn_cnt, ret;

	void socket_init();
	void socket_haddr_init_ipv4(char*);
	void socket_set_reuseaddr();
	void socket_bind();
	void socket_listen(int );
	void socket_accept();
	void add_httpresponse_header(std::string &, std::ifstream &);
	void add_httpresponse_data(std::string &, std::ifstream &);
	void rcv_message_core();
	void set_nonblocking(int );
	void set_blocking(int );

public:
	tcp_server(char* port);
	void rcv_message();
}
;
