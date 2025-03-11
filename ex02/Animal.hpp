/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:40 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:41:12 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif
