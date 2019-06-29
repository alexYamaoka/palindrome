CC = g++
FLAGS = -std=c++14 -Wall -g
#OBJS = object code not executable file
# OUT_EXE = .exe file name

all: palindrome
palindrome: palindrome.cpp
	$(CC)	$(FLAGS)	palindrome.cpp	-o	palindrome

clean:
	rm	palindrome	palindrome.scr	palindrome.tar

tar:
	tar	cf	palindrome.tar	palindrome.scr	Makefile	palindrome.cpp	
