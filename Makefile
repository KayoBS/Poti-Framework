TARGET=game.out
CC=g++
LD=g++
DEBUG=-s
OBJS=main.cpp game.cpp source/behavior/behavior.cpp source/behavior/platform/platform.cpp source/layoutObject/layoutObject.cpp source/window/window.cpp
WARN=-Wall
#CVER=-std=c99
RAY=-lraylib
IM=-lm
PTHREAD=-lpthread
LDL=-ldl
CCFLAGS=$(DEBUG) $(WARN) $(CVER) $(RAY) $(IM) $(PTHREAD) $(LDL)
Game:$(OBJS)
	$(LD) $(OBJS) -o $(TARGET) $(CCFLAGS)
