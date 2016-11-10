all: sum tree hello.exe

sum:
	gcc main.c sum.s -o sum

tree:
	ghc tree.hs

hello.exe:
	mcs hello.cs

clean:
	$(RM) sum tree *.hi *.o hello.exe
