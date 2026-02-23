#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int main()
{
    const int size = 6;
    Animal *array[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    for (int i = 0; i < size; i++)
        delete array[i];

    // Deep copy tests
    Dog original;
    original.setIdea(0, "Chase the mailman");
    Dog copy = original; // copy ctor
    original.setIdea(0, "Eat a bone");

    std::cout << "Original idea 0: " << original.getIdea(0) << std::endl;
    std::cout << "Copy idea 0:     " << copy.getIdea(0) << std::endl;

    Cat c1;
    c1.setIdea(0, "Sleep on keyboard");
    Cat c2;
    c2 = c1; // operator=
    c1.setIdea(0, "Knock over glass");

    std::cout << "Cat c1 idea 0: " << c1.getIdea(0) << std::endl;
    std::cout << "Cat c2 idea 0: " << c2.getIdea(0) << std::endl;

    return 0;
}
