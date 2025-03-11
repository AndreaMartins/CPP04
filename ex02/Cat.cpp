/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:54 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:44:05 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat created. (Default)" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    _brain = new Brain(*cat._brain);
    std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat) {
        Animal::operator=(cat);
        delete _brain;
        _brain = new Brain(*cat._brain);
    }
    std::cout << "Cat assigned." << std::endl;
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain() const {
    return _brain;
}
