/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6A

Write a program test-ascii.cpp that
 asks the user to input a line of text
  (which may possibly include spaces). 
  The program should report all characters 
  from the input line together with their 
  ASCII codes.

*/


#include <iostream>




std::string test_ascii(std::string phrase) { 
    std::string out = ""; 
    
    for(int i = 0; i < phrase.length(); i++) { 
        std::string ascii = std::to_string((int)(phrase[i])); 

         if(i == phrase.length()-1) { 
            out = out + phrase[i] + " " + ascii;
            
        }
        else { 
            out = out + phrase[i] + " " + ascii + "\n"; 
        }
    }
    return out;

}

int main() { 
    std::string output1 = test_ascii("Cat :3 Dog"); 
    std::string output2 = test_ascii(" a b c ");
     std::string output3 = test_ascii("!!$@");

   

    std::cout << output1 << std::endl;
     std::cout << std::endl;
    std::cout << output2 << std::endl;
    std::cout << std::endl;
    std::cout << output3 << std::endl;
     
}

