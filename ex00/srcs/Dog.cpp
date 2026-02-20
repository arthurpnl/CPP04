#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called !" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
    Animal::operator=(cpy);
    std::cout << "Dog assignment operator called !" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called !" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouf !... Wouf !" << std::endl;
}