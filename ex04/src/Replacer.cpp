#include <iostream>
#include <fstream>
#include <sstream>
#include "Replacer.hpp"

Replacer::Replacer(
    std::string filename,
    std::string s1,
    std::string s2): _filename(filename), _s1(s1), _s2(s2)
{}

Replacer::~Replacer(void)
{}

bool Replacer::read(void)
{
  std::fstream      file;
  std::stringstream buffer;

  file.open(this->_filename, std::fstream::in);
  if (!this->_isOpened(file))
    return (false);
  buffer << file.rdbuf();
  this->_content = buffer.str();
  file.close();
  return (true);
}

bool Replacer::write(void)
{
  std::fstream      file;
  std::size_t       found;
  std::size_t       pos;

  if (!this->_checkArgs())
    return (false);
  file.open(this->_filename + ".replace", std::fstream::out);
  if (!this->_isOpened(file))
    return (false);
  pos = 0;
  found = this->_findNext(pos);
  while (found != std::string::npos)
  {
    file << this->_content.substr(pos, found - pos);
    file << this->_s2;
    pos = found + this->_s1.length();
    found = this->_findNext(pos);
  }
  file << this->_content.substr(pos, found);
  file.close();
  return (true);
}

inline std::size_t Replacer::_findNext(std::size_t pos) const
{
  return (this->_content.find(this->_s1, pos));
}

inline bool  Replacer::_isOpened(std::fstream &file) const
{
  if (file.fail())
  {
    std::cout \
      << "Error: could not open file " \
      << this->_filename \
      << std::endl;
    return (false);
  }
  return (true);
}

bool  Replacer::_checkArgs(void) const
{
  if (this->_s1.empty())
  {
    std::cout \
      << "Error: s1 cannot be empty. " \
      << "Will result in an infinite loop." \
      << std::endl;
    return (false);
  }
  return (true);
}
