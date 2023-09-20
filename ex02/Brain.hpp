/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:16:12 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:19:39 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{

	public :

	Brain();
	Brain(Brain const& cpy);
	virtual	~Brain();

	Brain&	operator=(Brain const& cpy);
	
	std::string	getIdea(int i)const;
    void    setIdea(int i, std::string str);

	private :

	std::string s_ideas[100];

};

#endif