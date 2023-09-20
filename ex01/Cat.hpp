/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:50 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:55:42 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{

	public :

	Cat();
	Cat(Cat const& cpy);
	virtual	~Cat();

	Cat&	operator=(Cat const& cpy);

	virtual	void	makeSound()const;
	std::string	getIdea(int i)const;
    void    setIdea(int i, std::string str);
	private :

	Brain *s_brain;

};

#endif