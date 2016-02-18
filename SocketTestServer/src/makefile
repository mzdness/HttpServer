SocketTestServer: SocketTestServer.o tcp_server.o
	g++ -o SocketTestServer SocketTestServer.o tcp_server.o

SocketTestServer.o: SocketTestServer.cpp tcp_server.h
	g++ -c SocketTestServer.cpp

tcp_server.o: tcp_server.cpp tcp_server.h
	g++ -c tcp_server.cpp

.PHONY: clean

clean:
	-rm *.o SocketTestServer 
