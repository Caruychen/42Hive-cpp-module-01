#include <iostream>

int main(void)
{
  std::string str;
  std::string *stringPTR;
  std::string &stringREF = str;

  str = "HI THIS IS BRAIN";
  stringPTR = &str;

  std::cout << "Memory address of str: " << &str << std::endl;
  std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

  std::cout << "Value of str: " << str << std::endl;
  std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}
