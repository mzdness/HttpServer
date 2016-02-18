SocketTestClient: SocketTestClient.o tcp_client.o
	g++ -o SocketTestClient SocketTestClient.o tcp_client.o

SocketTestClient.o: SocketTestClient.cpp tcp_client.h
	g++ -c SocketTestClient.cpp

tcp_client.o: tcp_client.cpp tcp_client.h
	g++ -c tcp_client.cpp

.PHONY: clean

clean:
	-rm *.o SocketTestClient 
