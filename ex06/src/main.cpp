#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) {
  Harl harl;

  if (argc < 2)
  {
    std::cout \
      << "[ Looks like Harl didn't come today, thank bacon. ]" \
      << std::endl;
    return (1);
  }
  if (argc > 2)
  {
    std::cout \
      << "[ One at a time please! I don't get paid enough for this @#$%... ]" \
      << std::endl;
    return (1);
  }
  harl.complain(argv[1]);
  return (0);
}
