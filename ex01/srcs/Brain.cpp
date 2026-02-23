#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called !" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    *this = cpy;
    std::cout << "Brain copy constructor called !" << std::endl;
}

Brain &Brain::operator=(const Brain &cpy)
{
    for (int i = 0 ; i < 100 ; i++)
        this->ideas[i] = cpy.ideas[i];
    std::cout << "Brain assignment operator called !" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called !" << std::endl;
}

std::string Brain::getIdeas(int index) const
{
    if (index < 0 || index >= 100)
        return std::string();
    return this->ideas[index];
}

void Brain::setIdeas(int index, std::string idea)
{
    if (index < 0 || index >= 100)
        return;
    this->ideas[index] = idea;
}