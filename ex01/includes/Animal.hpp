#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;

    public:
    Animal();
    Animal &operator=(const Animal &cpy);
    Animal(const Animal &cpy);
    virtual ~Animal();
    std::string getType(void) const;
    virtual void    makeSound() const;
};

#endif