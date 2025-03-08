/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:10 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:43:56 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		int _trash;
		AMateria *_inventory[4];
		AMateria **_floor;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Character();
		Character(std::string const & type);

		/*	COPY CONSTRUCTOR	*/
		Character(const Character &copy);
				
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Character& operator=(const Character &other);
		
		/*	GETERS AND SETERS	*/
		std::string const & getName() const;

		/*	METHODS	*/
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void addTrash(AMateria* trash);
		void printMaterias() const;
		void printFloor() const;
		
		~Character();
};

#endif