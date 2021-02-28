CC = clang++ -std=c++11
CFLAGS = -Wall -Werror -Wpedantic -Wextra

ofiles = hello.o

all: hello

hello: $(ofiles)
	$(CC) -o hello $(ofiles)

$(ofiles): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

format:
	clang-format -i -style=file *.cpp 

clean:
	rm -rf hello *.o
