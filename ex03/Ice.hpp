/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:28 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:48:39 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &ice);
        Ice &operator=(const Ice &ice);
        virtual ~Ice();

        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);
};

#endif
