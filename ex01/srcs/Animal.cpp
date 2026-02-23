#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << "Animal default constructor called !" << std::endl;
}

Animal &Animal::operator=(const Animal &cpy)
{
    this->_type = cpy._type;
    std::cout << "Animal assignemnt operator called !" << std::endl;
    return (*this);
}

Animal::Animal (const Animal &cpy)
{
    *this = cpy;
    std::cout << "Animal copy constructor called !" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called !" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound() const
{
    std::cout << "..." << std::endl;
}