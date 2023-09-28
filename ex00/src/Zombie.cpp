#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
  std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie(void)
{
}

void  Zombie::announce(void) const {
  std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
