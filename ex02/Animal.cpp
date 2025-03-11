/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:35 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:41:15 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unknown") {
    std::cout << "Animal created. (Default)" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Animal of type " << _type << " created." << std::endl;
}

Animal::Animal(const Animal &animal) {
    *this = animal;
    std::cout << "Animal copied." << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
    if (this != &animal)
        _type = animal._type;
    std::cout << "Animal assigned." << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destroyed." << std::endl;
}

std::string Animal::getType() const {
    return _type;
}
