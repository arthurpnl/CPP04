#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called !" <<std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
    std::cout << "Cat copy constructor called !" << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
    Animal::operator=(cpy);
    std::cout << "Cat assignment operator called !" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called !" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meowwwww" << std::endl;
}