/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 06:21:14 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/25 11:57:15 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog's default constructor has been called!" << std::endl;
}

Dog::Dog( const Dog& ref ) : Animal(ref)
{
	this->type = ref.type;

	std::cout << "Dog's copy constructor has been called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor has been called!" << std::endl;
}

Dog&	Dog::operator=( const Dog& rhs )
{
	std::cout << "Dog's copy assignment operator has been called!" << std::endl;

	if (this == &rhs)
	{
		return (*this);
	}

	this->type = rhs.type;

	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof! The classic sound of a loyal companion." << std::endl;
}