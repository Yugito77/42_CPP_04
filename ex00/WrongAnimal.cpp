/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:52:22 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:05:26 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : s_type("Unknown")
{
	std::cout<<"WrongAnimal | Constructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : s_type(type)
{
	std::cout<<"WrongAnimal | String Constructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& cpy)
{
	std::cout<<"WrongAnimal | Copy Constructor Called"<<std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal | Destructor Called"<<std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& cpy)
{
	if(this == &cpy)
		return (*this);
	this->s_type = cpy.s_type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return(this->s_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout<<"I am Just a Wrong Animal !"<<std::endl;
}