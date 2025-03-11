/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:48:16 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:07:18 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal created. (Default)" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
    std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    *this = wrongAnimal;
    std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
    if (this != &wrongAnimal)
        _type = wrongAnimal._type;
    std::cout << "WrongAnimal assigned." << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed." << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
