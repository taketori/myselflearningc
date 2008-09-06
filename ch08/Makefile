# Makefile
# makefile sample

CC	= /bin/gcc
CXX	= /bin/gcc

CFLAGS		=
LDLIBS		=
CPPFLAGS	=

.SUFFIXES: .cpp .exe
SRC = $(wildcard *.cpp)
TARGET = $(SRC;$.cpp=$.exe)


all: $(TARGET)

.cpp.exe::
	$(CXX) $(CPPFLAGS) $< -o $@ $(LDLIBS)

clean:
	rm -f *.o $(TARGET) *~ *.core core

