#include <iostream>
#include "tcp_client.h"
#include <cstring>

#include <stdio.h>
#include <string.h>
#include <errno.h>
using namespace std;

int main(int argc,char* argv[])
{
		char ip[] = "127.0.0.1";
		//char * mesg = strerror(12);
		//   printf("Mesg:%s\n",mesg);
		if (argc < 2)
			cout << "error input"<<endl;
		else
			tcp_client tc(ip,argv[1]);
			//tcp_client tc(ip,"11113");
        return 0;
}
