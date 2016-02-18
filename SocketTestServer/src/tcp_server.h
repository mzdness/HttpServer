#include <unistd.h>
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cstring>
#define MAXSIZE 65535

class tcp_server
{
private:
	int socket_fd;
	int accept_fd;
	struct sockaddr_in host_addr;
	struct sockaddr_in rmt_addr;

public:
	tcp_server(char* port);
	void rcv_message();
};
