#include "tcp_client.h"
#include <cstring>

using namespace std;
tcp_client::tcp_client(char* server_ip,char* server_port)
{
	// open socket as a file, return file descriptor
	// protofamily AF_INET(IPV4), type SOCK_STREAM, protocol 0(auto select)
	if( (socket_fd = socket(AF_INET,SOCK_STREAM,0)) < 0 ) {
			cout << "create socket error:"<<endl;
			exit(0);
	}

	memset(&server_addr,0,sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(atoi(server_port));

	if( inet_pton(AF_INET,server_ip,&server_addr.sin_addr) <=0 ) {
			cout << "inet_pton error for"<<endl;
			exit(0);
	}

	if( connect(socket_fd,(struct sockaddr*)&server_addr,sizeof(server_addr))<0) {
			cout << "connect error: "<<endl;
			exit(0);
	}

	cout << "send message to server:"<<endl;

	while ( message.empty() )
		getline(cin,message);

	int pBuffer = 0;
	// if there's more than MAX_SIZE bytes to be sent
	while (pBuffer + MAX_SIZE < message.size() )
	{
		if( send( socket_fd,message.c_str() + pBuffer, MAX_SIZE ,0 ) < 0 ) {
				cout << "send message error\n"<<endl;
				exit(0);
		}
		pBuffer += MAX_SIZE;
		cout <<" [a chunk] ";
	}
	// less than MAX_SIZE bytes
	if( send( socket_fd,message.c_str() + pBuffer, message.size() - pBuffer ,0 ) < 0 ) {
			cout << "send message error\n"<<endl;
			exit(0);
	}
	cout <<" [send end] ";
	close(socket_fd);
	exit(0);

}