#include "Zombie.hpp"

void  test_set(int N, std::string name)
{
  Zombie  *horde = zombieHorde(N, name);
  for (int i = 0; i < N; i++)
    horde[i].announce();
  delete [] horde;
}

int main(void) {
  test_set(4, "pisciners");
  test_set(3, "Hiver 3s");
  test_set(10, "Bankers");
  return (0);
}
