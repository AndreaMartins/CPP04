/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:48:01 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 14:54:27 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    std::cout << "Cat created. (Default)" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat)
        Animal::operator=(cat);
    std::cout << "Cat assigned." << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
