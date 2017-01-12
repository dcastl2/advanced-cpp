all: main 

Cat.o: Cat.cpp
	g++ Cat.cpp -c

main: main.cpp Cat.o
	g++ main.cpp Cat.o -o main

clean:
	$(RM) Cat.o main 
