CC = clang++ -std=c++11
CFLAGS = -Wall -Werror -Wpedantic -Wextra


BINARIES = hello squeeze

all: $(BINARIES)

hello: hello.cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp

squeeze: squeeze.cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp

clean:
	rm -rf $(BINARIES) *.o
