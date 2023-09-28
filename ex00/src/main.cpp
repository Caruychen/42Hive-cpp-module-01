#include "Zombie.hpp"

int main(void) {
  Zombie *zombie;
  zombie = newZombie("Zombie");
  randomChump("Chump");
  zombie->announce();
  delete zombie;
  randomChump("Chump 2.0");
  return (0);
}
