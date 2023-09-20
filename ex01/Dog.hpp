/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:46 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:55:38 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{

	public :

	Dog();
	Dog(Dog const& cpy);
	virtual	~Dog();

	Dog&	operator=(Dog const& cpy);

	virtual	void	makeSound()const;
	std::string	getIdea(int i)const;
    void    setIdea(int i, std::string str);
	
	private :

	Brain *s_brain;
	
};

#endif