/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:48 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 18:18:53 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("DOG"), s_brain(new Brain())
{
	std::cout<<"Dog    | Constructor Called"<<std::endl;
}

Dog::Dog(Dog const& cpy) : Animal(), s_brain(0)
{
	s_brain = new Brain(*(cpy.s_brain));
	*this = cpy;
	std::cout<<"Dog    | Copy Constructor Called"<<std::endl;
}

Dog::~Dog()
{
	delete s_brain;
	std::cout<<"Dog    | Destructor Called"<<std::endl;
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

std::string	Dog::getIdea(int i) const
{
	return (s_brain->getIdea(i));
}

void	Dog::setIdea(int i, std::string str)
{
	s_brain->setIdea(i, str);
}