#include <iostream>
#include "Replacer.hpp"

int main(int argc, char* argv[])
{
  if (argc != 4)
  {
    std::cout \
      << "Usage: " \
      << argv[0] \
      << " <input file> <string s1> <string s2>" \
      << std::endl;
    return (1);
  }
  Replacer r = Replacer(argv[1], argv[2], argv[3]);
  if (!r.read())
    return (1);
  
  return (0);
}
