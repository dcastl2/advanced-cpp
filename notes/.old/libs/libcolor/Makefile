all: color interpreter

interpreter: interpreter.cpp coloration.o
	g++ interpreter.cpp coloration.o -o interpreter

color: main.cpp coloration.o
	g++ main.cpp coloration.o -o color

coloration.o: coloration.cpp
	g++ coloration.cpp -c

clean:
	$(RM) coloration.o color interpreter
