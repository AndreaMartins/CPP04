/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:41:46 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:50:14 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *_materias[4];
    
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &materiaSource);
        MateriaSource &operator=(const MateriaSource &materiaSource);
        virtual ~MateriaSource();

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};

#endif
