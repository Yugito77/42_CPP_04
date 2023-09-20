/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:25 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 16:31:01 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{

	public :

	Animal();
	Animal(std::string type);
	Animal(Animal const& cpy);
	virtual	~Animal();

	Animal&	operator=(Animal const& cpy);
	
	virtual	void	makeSound()const;
	std::string	getType()const;

	protected :

	std::string s_type;

};

#endif