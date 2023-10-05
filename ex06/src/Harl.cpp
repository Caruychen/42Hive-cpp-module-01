#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void  Harl::complain(std::string level) const
{
  switch (this->_enumerate_level(level))
  {
    case DEBUG:
      this->_debug();
    case INFO:
      this->_info();
    case WARN:
      this->_warn();
    case ERROR:
      this->_error();
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
  }
}

void  Harl::_debug(void) const
{
  std::cout \
    << "[DEBUG]\n" \
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" \
    << std::endl \
    << std::endl;
}

void  Harl::_info(void) const
{
  std::cout \
    << "[INFO]\n" \
    << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
    << std::endl \
    << std::endl;
}

void  Harl::_warn(void) const
{
  std::cout \
    << "[WARN]\n" \
    << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." \
    << std::endl \
    << std::endl;
}

void  Harl::_error(void) const
{
  std::cout \
    << "[ERROR]\n" \
    << "This is unacceptable! I want to speak to the manager now." \
    << std::endl \
    << std::endl;
}

int Harl::_enumerate_level(std::string level) const
{
  std::string levels[4] = { "debug", "info", "warn", "error" };
  for (int i = 0; i < 4; i++)
  {
    if (this->_to_lower(level) == levels[i])
      return (i);
  }
  return (-1);
}

std::string Harl::_to_lower(std::string str) const
{
  std::string res;

  for (std::string::size_type i = 0; i < str.size(); i++)
    res += (char)std::tolower(str[i]);
  return (res);
}
