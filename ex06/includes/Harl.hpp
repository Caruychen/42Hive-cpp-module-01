#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
  public:
    Harl();
    ~Harl();
    void  complain(std::string level) const;

  private:
    void  _debug(void) const;
    void  _info(void) const;
    void  _warn(void) const;
    void  _error(void) const;
    int   _enumerate_level(std::string level) const;
    std::string _to_lower(std::string str) const;
    enum  _e_level
    {
      DEBUG,
      INFO,
      WARN,
      ERROR
    };
};
#endif
