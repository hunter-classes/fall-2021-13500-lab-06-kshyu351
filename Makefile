main: main.o caesar.o vigenere.o
	g++ -o main main.o caesar.o vigenere.o decryption.o

tests: tests.o 
	g++ -o tests tests.o caesar.o vigenere.o decryption.o

main.o: main.cpp

tests.o: tests.cpp doctest.h

funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp 

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decryption.cpp decryption.h

clean:
	rm -f main.o test-ascii.o caesar.o vigenere.o funcs.o tests.o decryption.o
