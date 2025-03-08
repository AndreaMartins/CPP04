/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:35 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:31:17 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << "Animal name constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	GETTERS AND SETTERS	*/
const std::string &Animal::getType(void) const
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/
void Animal::makeSound() const
{
	std::cout << "    *    UNKNOWN SOUND...    *    " << std::endl;
}
/*	DESTRUCTOR	*/
Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}