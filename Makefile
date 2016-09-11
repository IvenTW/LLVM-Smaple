CC=clang++
CFLAGS=-std=c++14 -g -O3

all: FrontEnd

FrontEnd:
	$(CC) $(CFLAGS) *.cpp

clean:
	rm -rf a.*