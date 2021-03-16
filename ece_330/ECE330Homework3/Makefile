output: test.o heartrates.o
	g++ test.o heartrates.o -o output

test.o: test.cpp
	g++ -c test.cpp

heartrates.o: heartrates.cpp heartrates.h
	g++ -c heartrates.cpp

clean:
	rm *.o output
