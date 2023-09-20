/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:53 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 16:47:19 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("CAT")
{
	std::cout<<"Cat | Constructor Called"<<std::endl;
}

Cat::Cat(Cat const& cpy) : Animal()
{
	std::cout<<"Cat | Copy Constructor Called"<<std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout<<"Cat | Destructor Called"<<std::endl;
}

Cat&	Cat::operator=(Cat const& cpy)
{
	if(this == &cpy)
		return (*this);
	this->s_type = cpy.s_type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout<<"MIIAOUU"<<std::endl;
}