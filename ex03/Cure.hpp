/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:15 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:47:32 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &cure);
        Cure &operator=(const Cure &cure);
        virtual ~Cure();

        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);
};

#endif
