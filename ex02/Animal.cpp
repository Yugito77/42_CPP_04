/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:18 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 18:26:06 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : s_type("Unknown")
{
	std::cout<<"Animal | Constructor Called"<<std::endl;
}

Animal::Animal(std::string type) : s_type(type)
{
	std::cout<<"Animal | String Constructor Called"<<std::endl;
}

Animal::Animal(Animal const& cpy)
{
	std::cout<<"Animal | Copy Constructor Called"<<std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout<<"Animal | Destructor Called"<<std::endl;
}

Animal&	Animal::operator=(Animal const& cpy)
{
	if(this == &cpy)
		return (*this);
	this->s_type = cpy.s_type;
	return (*this);
}

std::string	Animal::getType() const
{
	return(this->s_type);
}
