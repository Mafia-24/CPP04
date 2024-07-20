/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 06:34:56 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/20 08:17:54 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void f()
{
	system("leaks exec");
}

int main()
{
	atexit(f);
	Animal* arr[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int i = 0; i < 4; i++)
		delete arr[i];

	return 0;
}

