# config.mk - make configuration file
# edit this file to change the behavior of the makefile

# example version
VERSION=0

# paths
PREFIX=/usr/local
MANPREFIX=$(PREFIX)/share/man

# flags
CPPFLAGS = -DVERSION=\"$(VERSION)\" -D_DEFAULT_SOURCE -D_XOPEN_SOURCE=700 -D_BSD_SOURCE
CFLAGS   = -std=c99 -pedantic -Wall -Wextra -Os
LDFLAGS  = -s -lcurl

# compiler and linker
CC = cc
