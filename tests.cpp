#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

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
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Hi", "cake") == "Ji");
    CHECK(encryptVigenere("abc", "bbc") == "bce");

   
}

TEST_CASE("decryptCaesar") { 
	CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!"); 
     CHECK(decryptCaesar("Ij", 1) == "Hi"); 


}

TEST_CASE("decryptVigenere") { 
	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Ji", "cake") == "Hi"); 
     CHECK(decryptVigenere("LOL", "abc") == "LPN"); 

}


   








