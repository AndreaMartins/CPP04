/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:30:22 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:34:47 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    	public:
		/*	DEFAULT CONSTRUCTOR	*/
		WrongCat();
		WrongCat(std::string type);

		/*	COPY CONSTRUCTOR	*/
		WrongCat(const WrongCat &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		WrongCat& operator=(const WrongCat &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		/*	DESTRUCTOR	*/
		~WrongCat();	
};

#endif