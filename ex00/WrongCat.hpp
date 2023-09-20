/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:54:56 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:02:56 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

	public :

	WrongCat();
	WrongCat(WrongCat const& cpy);
	virtual	~WrongCat();

	WrongCat&	operator=(WrongCat const& cpy);

	void	makeSound()const;

};

#endif