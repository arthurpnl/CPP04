#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called !" <<std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
    std::cout << "WrongCat copy constructor called !" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
    WrongAnimal::operator=(cpy);
    std::cout << "WrongCat assignment operator called !" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called !" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Meowwwww" << std::endl;
}