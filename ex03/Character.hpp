/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:10 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:46:34 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CPP
#define CHARACTER_CPP

#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria *_inventory[4];
        AMateria* _unequipped[4];

    public:
        Character();
        Character(std::string name);
        Character(const Character &character);
        Character &operator=(const Character &character);
        virtual ~Character();

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif
