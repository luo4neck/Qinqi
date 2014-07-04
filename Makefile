all: qinqi.o 
	g++ qinqi.o -Wall -o qinqi

qinqi.o: qinqi.cc 
	g++ -c qinqi.cc -Wall -o qinqi.o

test: all 
	./qinqi

clean:
	rm *.o qinqi
