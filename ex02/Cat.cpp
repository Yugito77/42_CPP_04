/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:53 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 18:07:08 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("CAT"), s_brain(new Brain())
{
	std::cout<<"Cat    | Constructor Called"<<std::endl;
}

Cat::Cat(Cat const& cpy) : Animal(), s_brain(0)
{
	s_brain = new Brain(*(cpy.s_brain));
	*this = cpy;
	std::cout<<"Cat    | Copy Constructor Called"<<std::endl;
}

Cat::~Cat()
{
	delete s_brain;
	std::cout<<"Cat    | Destructor Called"<<std::endl;
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

std::string	Cat::getIdea(int i) const
{
	return (s_brain->getIdea(i));
}

void	Cat::setIdea(int i, std::string str)
{
	s_brain->setIdea(i, str);
}