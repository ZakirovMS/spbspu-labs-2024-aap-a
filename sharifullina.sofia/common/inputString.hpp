#ifndef INPUTSTRING_HPP
#define INPUTSTRING_HPP

#include <iostream>

namespace sharifullina
{
  char * inputstring(std::istream & in, char stop);
  char * shrSym(const char * str1, const char * str2, char * res);
  char * uniTwo(const char * str1, const char * str2, char * res);
}
#endif
