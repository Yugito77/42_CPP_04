/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:10:03 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/28 17:06:35 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "/*** Test given ***/" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		std::cout <<"Type = "<< j->getType() << " " << std::endl;
		std::cout <<"Type = "<< i->getType() << " " << std::endl;
		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete j;
		j = 0;
		delete i;
		i = 0;
		delete meta;
		meta = 0;
	}
	{
		std::cout <<std::endl<< "*******************" << std::endl<<std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << std::endl;
		std::cout <<"Type = "<< i->getType() << " " << std::endl;
		std::cout << std::endl;
		i->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete i;
		i = 0;
		delete meta;
		meta = 0;
	}

	return 0;
}