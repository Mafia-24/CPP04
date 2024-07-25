/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 06:34:56 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/25 13:59:15 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void f()
{
	system("leaks abstract");
}

int main()
{
	atexit(f);
	
	AAnimal *animal = new Dog();

	animal->makeSound();

	delete animal;

	return 0;
}

