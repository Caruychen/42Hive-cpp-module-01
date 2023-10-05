#include "Harl.hpp"

int main(void) {
  Harl harl;

  harl.complain("debug");
  harl.complain("info");
  harl.complain("warn");
  harl.complain("error");
  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARN");
  harl.complain("ERROR");
  harl.complain("");
  harl.complain("DEBUGdebug");
  return (0);
}
