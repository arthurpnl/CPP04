#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog();
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &cpy);
        ~Dog();
        void    makeSound(void) const;
        void    setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

#endif