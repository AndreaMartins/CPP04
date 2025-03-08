/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:13 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:44:18 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Cure::Cure(const Cure &copy)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Cure& Cure::operator=(const Cure &other)
{
	// std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	MEMBER FUNCTIONS	*/
AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
};


/*	DESTRUCTOR	*/
Cure::~Cure()
{
	// std::cout << "Cure Destructor called" << std::endl;
}