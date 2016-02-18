objects = HttpServer.o tcp_server.o

HttpServer: $(objects)
	g++ -o HttpServer $(objects)

# HttpServer.o: HttpServer.cpp tcp_server.h
HttpServer.o: tcp_server.h

# tcp_server.o: tcp_server.cpp tcp_server.h
tcp_server.o: tcp_server.h

.PHONY: clean

clean:
	-rm HttpServer $(objects) 
