/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:52:31 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:02:42 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{

	public :

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const& cpy);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(WrongAnimal const& cpy);
	
	void	makeSound()const;
	std::string	getType()const;

	protected :

	std::string s_type;

};

#endif