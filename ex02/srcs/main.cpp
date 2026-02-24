#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
    //AAnimal a; 

    const AAnimal* animals[4] = {new Cat(), new Cat(), new Dog(), new Dog()};
    
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();
    
    for (int i = 0; i < 4; i++)
        delete animals[i];

    std::cout << "\n--- Test Deep Copy ---" << std::endl;

    Cat cat1;
    cat1.setIdea(0, "une idée");
    Cat cat2(cat1);

    cat1.setIdea(0, "nouvelle idée");

    std::cout << "cat1: " << cat1.getIdea(0) << std::endl;
    std::cout << "cat2: " << cat2.getIdea(0) << std::endl;

    return 0;
}