/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:40:56 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:45:31 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &aMateria) {
    *this = aMateria;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
    if (this != &aMateria)
        _type = aMateria._type;
    return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "* uses AMateria on " << target.getName() << " *" << std::endl;
}
