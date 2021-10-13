main: main.o funcs.o caesar.o vigenere.o
	g++ -o main main.o funcs.o caesar.o vigenere.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o 


main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h 

funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp 

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

clean:
	rm -f main.o test-ascii.o caesar.o vigenere.o funcs.o tests.o
