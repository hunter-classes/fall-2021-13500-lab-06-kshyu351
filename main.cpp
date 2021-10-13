#include <iostream>


#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main()
{
  char char1 = shiftChar('z', 5);
  char char3 = shiftChar('y', 5);
  char char2 = shiftChar('a', 5);
  char char4 = shiftChar(' ', 5);

  std::cout << char1 << std::endl;
  std::cout << char2 << std::endl; 
  std::cout << char3 << std::endl; 
  std::cout << char4 << std::endl; 

  std::string encrypted = encryptCaesar("Way to Go!", 5); 
  std::cout << encrypted << std::endl;

  std::string test = encryptVigenere("Hello, world!", "cake");
  std::cout << test << std::endl;

}
