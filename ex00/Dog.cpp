/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:48:06 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:06:01 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout << "Dog created. (Default)" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog) {
    std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
    if (this != &dog)
        Animal::operator=(dog);
    std::cout << "Dog assigned." << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
