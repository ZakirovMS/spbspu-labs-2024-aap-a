#include <iostream>
#include "stringFunctions.hpp"
#include "../../asafov.andrew/common/inputString.hpp"

int main()
{
  char* str = asafov::inputString();
  if(str[0] == '\0')
  {
    delete[] str;
    return 1;
  }
  try
  {
    std::cout << asafov::countUniqLetters(str) << '\n';
  }
  catch (const std::bad_alloc&)
  {
    delete[] str;
  }

  char* unusedLetters = new char[26];
  try
  {
    asafov::getUnusedLetters(str, unusedLetters);
  }
  catch (const std::bad_alloc&)
  {
    delete[] unusedLetters;
    delete[] str;
  }
  std::cout << unusedLetters << '\n';

  delete[] unusedLetters;
  delete[] str;
  return 0;
}
