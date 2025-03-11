/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:15:55 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:43:03 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    int n = 100;
    Animal *animals[100];
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        delete animals[i];
    }

    std::cout << std::endl;

    Dog dog;
    Dog dogCopy;
    
    dog.getBrain()->setIdea(0, "I am a dog.");
    dogCopy = dog;
    
    std::cout << "dog: " << dog.getBrain()->getIdea(0) << std::endl;
    std::cout << "docCopy: " << dogCopy.getBrain()->getIdea(0) << std::endl;

    //Animal animal;
    //Animal *animal2 = new Animal();
    
    return 0;
}
