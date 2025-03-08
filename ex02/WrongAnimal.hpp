/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:30:14 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:35:14 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		WrongAnimal();
		WrongAnimal(std::string const &type);

		/*	COPY CONSTRUCTOR	*/
		WrongAnimal(const WrongAnimal &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		WrongAnimal& operator=(const WrongAnimal &other);
		
		/*	GETTERS AND SETTERS	*/
		const std::string &getType(void) const;

		/*	MEMBER FUNCTIONS	*/
		void makeSound() const;

		/*	DESTRUCTOR	*/
		~WrongAnimal();	
};

#endif