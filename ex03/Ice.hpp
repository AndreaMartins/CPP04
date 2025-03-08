/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:28 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:45:15 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Ice();

		/*	COPY CONSTRUCTOR	*/
		Ice(const Ice &copy);
				
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Ice& operator=(const Ice &other);

		AMateria* clone() const;
		void use(ICharacter& target);

		~Ice();
};

#endif