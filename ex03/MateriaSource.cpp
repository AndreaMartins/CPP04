/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:44 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:50:00 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
    for (int i = 0; i < 4; i++) {
        if (materiaSource._materias[i])
            _materias[i] = materiaSource._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
    if (this != &materiaSource) {
        for (int i = 0; i < 4; i++) {
            if (_materias[i])
                delete _materias[i];
            if (materiaSource._materias[i])
                _materias[i] = materiaSource._materias[i]->clone();
            else
                _materias[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (!_materias[i]) {
            _materias[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return NULL;
}
