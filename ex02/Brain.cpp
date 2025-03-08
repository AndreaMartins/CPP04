/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:44 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:31:59 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "no idea";
}

/*	COPY CONSTRUCTOR	*/
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	 for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    return(*this);
}

void	Brain::setIdeas(std::string const idea, int index)
{
	std::cout << "Brain Set Ideas called" << std::endl << "New idea is: "<< idea << std::endl;;
	_ideas[index] = idea;
}

void	Brain::printIdea(int index) const
{
	if (index >= 0 && index < 100)
		std::cout << "Index: " << index << " Idea: " << _ideas[index] << std::endl;
	else
		std::cout << "There is no such idea. choose an index between 0 and 99." << std::endl;

}

/*	DESTRUCTOR	*/
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}