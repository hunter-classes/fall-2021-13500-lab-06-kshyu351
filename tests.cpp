#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

// add your tests here

//use this command: 
//g++ -std=c++11 tests.cpp
//./a.out

TEST_CASE("caesar.cpp") { 
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!"); 
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!"); 
    CHECK(encryptCaesar("", 10) == ""); 
    CHECK(encryptCaesar("*((!", 10) == "*((!"); 
    CHECK(encryptCaesar("* ( (!", 10) == "* ( (!"); 
}

TEST_CASE("vigenere.cpp") { 
	CHECK(encryptVigenere("Hello, world!", "cake") == "Jevpq, Wyvnd!");
   
}







