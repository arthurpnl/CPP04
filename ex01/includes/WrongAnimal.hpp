#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
    WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &cpy);
    WrongAnimal(const WrongAnimal &cpy);
    virtual ~WrongAnimal();
    std::string getType(void) const;
    void    makeSound() const;
};

#endif