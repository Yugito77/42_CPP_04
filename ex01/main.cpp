/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:10:03 by hcherpre          #+#    #+#             */
/*   Updated: 2022/11/24 14:26:15 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <vector>

int main()
{
	{
		std::cout << std::endl;
		std::cout << "/*** Constructors par defauts ***/" << std::endl;

		Animal* tab[10];

		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}

			for (int i = 0; i < 10; i++)
		{
			tab[i]->makeSound();
		}
		
		for (int i = 0; i < 10; i++)
		{
			delete tab[i];
			tab[i] = 0;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "/*** Cat ***/" << std::endl;
		Cat *cat = new Cat();
		std::cout << std::endl;
		cat->setIdea(0, "Idea : CATSLEEP");
		std::cout << cat->getIdea(0) << std::endl;
		cat->setIdea(1, "Idea : CATFOOD");
		std::cout << cat->getIdea(1) << std::endl;
		cat->setIdea(0, "Idea : CATPLAY");
		std::cout << cat->getIdea(0) << std::endl;
		std::cout << std::endl;

		delete (cat);
	}

	{
		std::cout << std::endl;
		std::cout << "/*** Constructors par copie ***/" << std::endl;

		Dog *dog = new Dog();
		std::cout << std::endl;

		dog->setIdea(0, "Idea : FOOD");
		std::cout << dog->getIdea(0) << std::endl;
		dog->setIdea(1, "Idea : SLEEP");
		std::cout << dog->getIdea(1) << std::endl;
		dog->setIdea(0, "Idea : ER");
		std::cout << dog->getIdea(0) << std::endl;
		std::cout << std::endl;

		std::cout << "** init dog_bis **" << std::endl;
		Dog	*dog_bis = new Dog(*dog);
		std::cout << std::endl;
		std::cout << "dog = " << dog->getIdea(0) << " | dog_bis = " << dog_bis->getIdea(0) << std::endl;
		std::cout << "dog = " << dog->getIdea(1) << " | dog_bis = "<< dog_bis->getIdea(1) << std::endl;

		std::cout << std::endl;
		std::cout << "** dog_bis new ideas **" << std::endl;
		dog_bis->setIdea(10, "Idea : FOOD");
		std::cout << dog_bis->getIdea(0) << std::endl;
		dog_bis->setIdea(56, "Idea : SLEEP");
		std::cout << dog_bis->getIdea(1) << std::endl;
		dog_bis->setIdea(99, "Idea : ER");
		std::cout << dog_bis->getIdea(0) << std::endl;
		std::cout << std::endl;

		delete dog;
		dog = 0;
		delete dog_bis;
		dog_bis = 0;
	}

	return 0;
}
