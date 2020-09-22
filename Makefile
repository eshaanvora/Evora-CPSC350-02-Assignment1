# A simple Makefile for CPSC 350
# Assumes the following directory hierarchy: /Users/eshaan/Documents/CPSC_Courses/CPSC_350/Assignment_1/
# Assignment 1
# 	src
#       include

#this Makefile goes in the src directory

#change this to the correct assignment #
EXECUTABLE := assignment1

# the source files to be built
SOURCES := *.cpp

#stuff you don't need to worry about
INCLUDES := -I ../include
EXT := out
CC := g++

all:
	$(CC) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE).$(EXT)

realclean:
	find . -type f -name "*.o" -exec rm '{}' \;
	find . -type f -name "*.exe" -exec rm '{}' \;

# this line required by make - don't delete
