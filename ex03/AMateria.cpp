/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:40:56 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:43:07 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*	DEFAULT CONSTRUCTOR	*/
AMateria::AMateria() : _type("Materia")
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	// std::cout << "AMateria name constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
AMateria::AMateria(const AMateria &copy)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
AMateria& AMateria::operator=(const AMateria &other)
{
	// std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

/*	GETTERS AND SETTERS	*/
const std::string &AMateria::getType(void) const
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/
void AMateria::use(ICharacter& target)
{
	std::cout << "* "<< target.getName() << " does something with the materia *" << std::endl;
}
/*	DESTRUCTOR	*/
AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor called" << std::endl;
}