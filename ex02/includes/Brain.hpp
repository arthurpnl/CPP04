#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        std::string getIdeas(int index) const;
        void    setIdeas(int index, std::string idea);
        Brain();
        Brain(const Brain &cpy);
        Brain &operator=(const Brain &cpy);
        ~Brain();
};

#endif