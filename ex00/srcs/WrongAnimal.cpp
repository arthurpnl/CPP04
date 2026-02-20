#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called !" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
    this->_type = cpy._type;
    std::cout << "WrongAnimal assignemnt operator called !" << std::endl;
    return (*this);
}

WrongAnimal::WrongAnimal (const WrongAnimal &cpy)
{
    *this = cpy;
    std::cout << "WrongAnimal copy constructor called !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal destructor called !" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "..." << std::endl;
}