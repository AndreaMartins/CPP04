/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:10:59 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:13:02 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        ~Dog();

        void makeSound() const;
        Brain *getBrain() const;
};

#endif
