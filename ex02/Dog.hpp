/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:30:03 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:33:45 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
    public:
		/*	DEFAULT CONSTRUCTOR	*/
		Dog();

		/*	COPY CONSTRUCTOR	*/
		Dog(const Dog &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Dog& operator=(const Dog &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		Brain	*getBrain() const;
		void	printBrainIdea(int index) const;
		
		/*	DESTRUCTOR	*/
		~Dog();	
};

#endif