/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:15 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:44:31 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	
	public:
	/*	DEFAULT CONSTRUCTOR	*/
	Cure();

	/*	COPY CONSTRUCTOR	*/
	Cure(const Cure &copy);
			
	/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
	Cure& operator=(const Cure &other);

	/*	METHODS	*/
	AMateria* clone() const;
	void use(ICharacter& target);

	~Cure();
};

#endif