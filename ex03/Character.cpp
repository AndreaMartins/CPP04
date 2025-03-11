/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:07 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:46:06 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default") {
    for (int i = 0; i < 4; i++) {
        _inventory[i] = NULL;
        _unequipped[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        _inventory[i] = NULL;
        _unequipped[i] = NULL;
    }
}

Character::Character(const Character &character) : _name(character._name) {
    for (int i = 0; i < 4; i++) {
        if (character._inventory[i])
            _inventory[i] = character._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character &Character::operator=(const Character &character) {
    if (this != &character) {
        _name = character._name;
        for (int i = 0; i < 4; i++) {
            if (_inventory[i])
                delete _inventory[i];
            if (character._inventory[i])
                _inventory[i] = character._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i])
            delete _inventory[i];
        if (_unequipped[i])
            delete _unequipped[i];
    }
}

std::string const &Character::getName() const {
    return _name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        for (int i = 0; i < 4; i++) {
            if (!_unequipped[i]) {
                _unequipped[i] = _inventory[idx];
                _inventory[idx] = NULL;
                return;
            }
        }
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx]->use(target);
}
