#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <string>

class Replacer
{
  public:
    Replacer(std::string filename, std::string s1, std::string s2);
    ~Replacer(void);
    std::string getFilename(void) const;
    std::string getS1(void) const;
    std::string getS2(void) const;
    bool  read(void);
    bool  write(void);

  private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
    std::string _content;
    inline std::size_t _findNext(std::size_t pos) const;
    inline bool  _isOpened(std::fstream &file) const;
};
#endif
