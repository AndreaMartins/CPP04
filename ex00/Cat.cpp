/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:48:01 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 14:50:27 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	MEMBER FUNCTIONS	*/
void Cat::makeSound() const
{
	std::cout << "    *    MEOW MEOW    *    " << std::endl;
}

/*	DESTRUCTOR	*/
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}