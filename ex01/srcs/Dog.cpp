#include "Dog.hpp"

Dog::Dog()
{
    this->_brain = new Brain();
    this->_type = "Dog";
    std::cout << "Dog default constructor called !" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    this->_brain = new Brain(*cpy._brain);
    std::cout << "Dog copy constructor called !" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
    if (this == &cpy)
        return (*this);
    Animal::operator=(cpy);
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*cpy._brain);
    std::cout << "Dog assignment operator called !" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called !" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouaf" << std::endl;
}

void    Dog::setIdea(int index, std::string idea)
{
    this->_brain->setIdeas(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return (this->_brain->getIdeas(index));
}
