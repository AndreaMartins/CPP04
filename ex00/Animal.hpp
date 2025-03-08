/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:47:53 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 14:50:12 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Animal();
		Animal(std::string const &type);

		/*	COPY CONSTRUCTOR	*/
		Animal(const Animal &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Animal& operator=(const Animal &other);
		
		/*	GETTERS AND SETTERS	*/
		const std::string &getType(void) const;

		/*	MEMBER FUNCTIONS	*/
		virtual void makeSound() const;

		/*	DESTRUCTOR	*/
		virtual ~Animal();	
};

#endif