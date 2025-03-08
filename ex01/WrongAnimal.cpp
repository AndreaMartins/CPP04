/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:11:06 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 15:17:29 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*	DEFAULT CONSTRUCTOR	*/
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
	std::cout << "WrongAnimal name constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	GETTERS AND SETTERS	*/
const std::string &WrongAnimal::getType(void) const
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/
void WrongAnimal::makeSound() const
{
	std::cout << "    *    WRONG UNKNOWN SOUND...    *    " << std::endl;
}
/*	DESTRUCTOR	*/
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}