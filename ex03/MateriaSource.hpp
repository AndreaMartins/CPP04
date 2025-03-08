/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:46 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:47:04 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		MateriaSource();	

		/*	COPY CONSTRUCTOR	*/
		MateriaSource(const MateriaSource &copy);
			
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		// MateriaSource& operator=(const MateriaSource &other);

		/*	METHODS	*/
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		void printMaterias() const;
		
		~MateriaSource();
};

#endif