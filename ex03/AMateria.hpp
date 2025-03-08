/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:04 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:43:20 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
	/*	DEFAULT CONSTRUCTOR	*/
	AMateria();
	AMateria(std::string const & type);

	/*	COPY CONSTRUCTOR	*/
	AMateria(const AMateria &copy);
			
	/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
	AMateria& operator=(const AMateria &other);

	/*	GETTERS AND SETTERS	*/
	const std::string &getType(void) const;
	
	/*	METHODS	*/
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
	virtual ~AMateria();
};

#endif