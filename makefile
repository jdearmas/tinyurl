# See LICENSE file for copyright and licensing details
# tinyurl - return a shorter version of the url
.POSIX:

include config.mk

SRC=tinyurl

all: tinyurl

tinyurl.o: tinyurl.h

tinyurl: $(SRC:=.o) $(SRC:=.h) tinyurl.o

clean:
	rm -rf $(SRC:=.o) tinyurl tinyurl.o
