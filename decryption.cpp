/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6D

Write the functions for Task D in files 
named decryption.cpp and decryption.h. 
Once again, modify the other files as 
necessary and write sufficient tests in 
tests.cpp.

*/

#include <iostream>
#include <string>
#include <ctype.h>
#include "vigenere.h"
#include "caesar.h"
#include "decryption.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    return encryptCaesar(ciphertext, 26-rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string decryptShift = "";
    for(int i = 0; i < keyword.length(); i++){
        decryptShift += shiftChar(keyword[i], 26 - ((keyword[i]-97) * 2));
    }
    return encryptVigenere(ciphertext, decryptShift);
}