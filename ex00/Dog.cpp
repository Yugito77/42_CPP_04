/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:48 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 16:47:43 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("DOG")
{
	std::cout<<"Dog | Constructor Called"<<std::endl;
}

Dog::Dog(Dog const& cpy) : Animal()
{
	std::cout<<"Dog | Copy Constructor Called"<<std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout<<"Dog | Destructor Called"<<std::endl;
}

Dog&	Dog::operator=(Dog const& cpy)
{
	if(this == &cpy)
		return (*this);
	this->s_type = cpy.s_type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout<<"WOUAFF"<<std::endl;
}