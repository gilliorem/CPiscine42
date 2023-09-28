CC = gcc
CFLAGS = -Wall -Wextra -I./include

LIBRARY_SRC = library/files.c
APP_SRC = src/generateMap.c

all: bsq

bsq: $(LIBRARY_SRC) $(APP_SRC) $(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f bsq
