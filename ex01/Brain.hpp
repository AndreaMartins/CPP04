/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:10:46 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 15:11:30 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        ~Brain();

        void setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};

#endif
