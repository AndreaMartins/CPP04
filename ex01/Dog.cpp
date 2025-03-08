/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:10:55 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 15:15:57 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
}

/*	COPY CONSTRUCTOR	*/
Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

/*	MEMBER FUNCTIONS	*/
void Dog::makeSound() const
{
	std::cout << "    *    WOOF WOOF    *    " << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (_brain);
}

void	Dog::printBrainIdea(int index) const
{
	if (_brain)
		_brain->printIdea(index);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

/*	DESTRUCTOR	*/
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor called" << std::endl;
}