/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:54:49 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 16:57:13 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WRONGCAT")
{
	std::cout<<"WrongCat | Constructor Called"<<std::endl;
}

WrongCat::WrongCat(WrongCat const& cpy) : WrongAnimal()
{
	std::cout<<"WrongCat | Copy Constructor Called"<<std::endl;
	*this = cpy;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat | Destructor Called"<<std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& cpy)
{
	if(this == &cpy)
		return (*this);
	this->s_type = cpy.s_type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout<<"MIIAOUU"<<std::endl;
}