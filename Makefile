CXX=g++
CXXFLAGS=-I./src/ -std=c++14 -Wall
DEPS = src/AbramovT_decider.h
OBJS = src/AbramovT_tri.o src/AbramovT_decider.o

all: tri

%.o: %.c $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

tri: $(OBJS)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

test: all
	python test.py

clean:
	rm *.o tri.exe
