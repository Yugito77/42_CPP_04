/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:16:06 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 18:02:12 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain  | Constructor Called"<<std::endl;
}

Brain::Brain(Brain const& cpy)
{
	std::cout<<"Brain  | Copy Constructor Called"<<std::endl;
    *this = cpy;
}

Brain::~Brain()
{
	std::cout<<"Brain  | Destructor Called"<<std::endl;
}

/******************************************************************/

Brain&  Brain::operator=(Brain const& cpy)
{
    if(this == &cpy)
        return (*this);
    for(int i = 0; i<100; i++)
        s_ideas[i] = cpy.s_ideas[i];
    return (*this);
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 100)
	{
		std::cout<<"Too much Ideas"<<std::endl;
		return (NULL);
	}
	return (s_ideas[i]);
}

void	Brain::setIdea(int i, std::string str)
{
	if (i >= 100)
	{
		std::cout<<"Too much Ideas"<<std::endl;
		return ;
	}
	s_ideas[i] = str;
}