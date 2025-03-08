/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:29:01 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:32:59 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    	private:
			Brain *_brain;
		public:
		/*	DEFAULT CONSTRUCTOR	*/
		Cat();

		/*	COPY CONSTRUCTOR	*/
		Cat(const Cat &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Cat& operator=(const Cat &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		Brain	*getBrain() const;
		void	printBrainIdea(int index) const;

		/*	DESTRUCTOR	*/
		~Cat();	
};

#endif