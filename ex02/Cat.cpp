/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:54 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:32:40 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
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

Brain	*Cat::getBrain() const
{
	return (_brain);
}

void	Cat::printBrainIdea(int index) const
{
	if (_brain)
		_brain->printIdea(index);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

/*	DESTRUCTOR	*/
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called" << std::endl;
}