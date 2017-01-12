all: main 

Circle.o: Circle.cpp
	g++ Circle.cpp -c

main: main.cpp Circle.o
	g++ main.cpp Circle.o -o main

clean:
	$(RM) Circle.o main 
