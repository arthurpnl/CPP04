#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string _type;

    public:
    AAnimal();
    AAnimal &operator=(const AAnimal &cpy);
    AAnimal(const AAnimal &cpy);
    virtual ~AAnimal();
    std::string getType(void) const;
    virtual void    makeSound() const = 0;
};

#endif