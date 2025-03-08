/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:48:09 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 14:52:25 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
		/*	DEFAULT CONSTRUCTOR	*/
		Dog();
		Dog(std::string type);

		/*	COPY CONSTRUCTOR	*/
		Dog(const Dog &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Dog& operator=(const Dog &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		/*	DESTRUCTOR	*/
		~Dog();	
};

#endif