all: main 

Star.o: Star.cpp
	g++ Star.cpp -c

main: main.cpp Star.o
	g++ main.cpp Star.o -o main

clean:
	$(RM) Star.o main 
