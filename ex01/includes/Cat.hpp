#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    private:
        Brain   *_brain;
    public:
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &cpy);
        ~Cat();
        void    makeSound(void) const;
        void    setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

#endif