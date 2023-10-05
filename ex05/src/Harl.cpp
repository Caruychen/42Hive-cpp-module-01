#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void  Harl::complain(std::string level) const
{
  std::string levels[4] = { "debug", "info", "warn", "error" };
  void (Harl::*f_ptr[4])() const = {
    &Harl::_debug,
    &Harl::_info,
    &Harl::_warn,
    &Harl::_error
  };
  for (int i = 0; i < 4; i++)
  {
    if (this->_to_lower(level) == levels[i])
      (this->*f_ptr[i])();
  }
}

void  Harl::_debug(void) const
{
  std::cout \
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" \
    << std::endl;
}

void  Harl::_info(void) const
{
  std::cout \
    << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
    << std::endl;
}

void  Harl::_warn(void) const
{
  std::cout \
    << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." \
    << std::endl;
}

void  Harl::_error(void) const
{
  std::cout \
    << "This is unacceptable! I want to speak to the manager now." \
    << std::endl;
}

std::string Harl::_to_lower(std::string str) const
{
  std::string res;

  for (std::string::size_type i = 0; i < str.size(); i++)
    res += (char)std::tolower(str[i]);
  return (res);
}
