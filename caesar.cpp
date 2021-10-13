/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6B

Write the functions required for task B 
in a files named caesar.cpp and caeser.h. 
You will have to change the Makefile accordingly. 
Also note that this repository starts with 
funcs.cpp/funcs.h. You won’t be using those files 
but can use them and the Makefile as a starting point.
*/


#include <iostream>
#include "caesar.h"
#include <string>

char shiftChar(char c, int rshift) { 
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz"; 

    bool isAlphabetic = false; 
        
    char lowercaseChar = char(tolower(c)); 
    int cIndex = 0; 
    for (int i = 0; i < alphabet.length(); i++) { 
        if (alphabet[i] == lowercaseChar) { 
            cIndex = i; 
            isAlphabetic = true; 
            break; 
        }
    }

    if (isAlphabetic) { 
        int newIndex = 0; 
        if ((rshift+cIndex) > 25) { 
            newIndex = rshift+cIndex-26; 
        }
        else { 
            newIndex = cIndex+rshift; 
        }

        char newChar = alphabet[newIndex]; 
        if (isupper(c)) { 
            newChar = toupper(newChar);
        }
        return newChar; 
    }

    else { 
        return c;
    }
}


std::string encryptCaesar(std::string plaintext, int rshift) { 
    std::string encrypt = ""; 
    for (int i = 0; i < plaintext.length(); i++) { 
        encrypt += shiftChar(plaintext[i], rshift); 
    }
    return encrypt; 

 }


