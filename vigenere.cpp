/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6C

Write the functions for Task C in files 
named vigenere.cpp and vigenere.h. 
Once again, modify the other files as 
necessary and write sufficient tests in 
tests.cpp.

*/

#include <iostream>
#include <ctype.h>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword) { 
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
    std::string indexes = ""; 
    std::string output = ""; 

    for (int i = 0; i < keyword.length(); i++) { 
        for (int j = 0; j < alphabet.length(); j++) { 
            
            if (keyword[i] == alphabet[j]) { 
                indexes += std::to_string(j);
                j = 26;
            }
            // else if(!isalpha(keyword[i])) { 
            //     indexes += " ";
            // }
        }
    }

    for (int a = 0; a < plaintext.length(); a++) { 
        for (int b = 0; b < keyword.length(); b++) { 
            if (isalpha(plaintext[a])) { 
                output += shiftChar(plaintext[a], keyword[b]); 
            }
            else { 
                a--;
            }
            
        }
    }

    return output; 
}
            


        
   