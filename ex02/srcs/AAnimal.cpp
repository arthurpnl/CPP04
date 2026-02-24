#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->_type = "Animal";
    std::cout << "Animal default constructor called !" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &cpy)
{
    this->_type = cpy._type;
    std::cout << "Animal assignemnt operator called !" << std::endl;
    return (*this);
}

AAnimal::AAnimal(const AAnimal &cpy)
{
    this->_type = cpy._type;
    std::cout << "Animal copy constructor called !" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called !" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}

void    AAnimal::makeSound() const
{
    std::cout << "..." << std::endl;
}