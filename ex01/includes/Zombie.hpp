#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
  public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    void  setName(std::string name);
    void	announce(void) const;

  private:
    std::string	_name;
};

Zombie  *zombieHorde(int N, std::string name);

#endif
