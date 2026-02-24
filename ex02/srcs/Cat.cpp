#include "Cat.hpp"

Cat::Cat()
{
    this->_brain = new Brain();
    this->_type = "Cat";
    std::cout << "Cat default constructor called !" <<std::endl;
}

Cat::Cat(const Cat &cpy) : AAnimal(cpy)
{
    this->_brain = new Brain(*cpy._brain);
    std::cout << "Cat copy constructor called !" << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
    if (this == &cpy)
        return (*this);
    AAnimal::operator=(cpy);
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*cpy._brain);
    std::cout << "Cat assignment operator called !" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called !" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meowwwww" << std::endl;
}

void    Cat::setIdea(int index, std::string idea)
{
    this->_brain->setIdeas(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return (this->_brain->getIdeas(index));
}
