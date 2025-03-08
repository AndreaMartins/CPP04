/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:28:49 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/08 16:32:28 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
//# include <string>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Brain();

		/*	COPY CONSTRUCTOR	*/
		Brain(const Brain &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Brain& operator=(const Brain &other);
		
		/*	GETTERS AND SETTERS	*/
		void	setIdeas(std::string const idea, int index);
		void	printIdea(int index) const;

		/*	DESTRUCTOR	*/
		~Brain();
};

#endif