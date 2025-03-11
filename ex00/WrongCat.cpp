/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:48:21 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:07:58 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "WrongCat created. (Default)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat) {
    std::cout << "WrongCat copied." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
    if (this != &wrongCat)
        WrongAnimal::operator=(wrongCat);
    std::cout << "WrongCat assigned." << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed." << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow? (WrongCat sound)" << std::endl;
}
