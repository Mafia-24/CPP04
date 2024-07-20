/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 06:00:41 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/20 06:38:01 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "Unknown creature";

	std::cout << "Animal's default constructor has been called!" << std::endl;
}

Animal::Animal( const Animal& ref )
{
	this->type = ref.type;

	std::cout << "Animal's copy constructor has been called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor has been called!" << std::endl;
}

Animal& Animal::operator=( const Animal& rhs )
{
	std::cout << "Animal's copy assignment operator has been called!" << std::endl;

	if (this == &rhs)
	{
		return (*this);
	}

	this->type = rhs.type;

	return (*this);	
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Unknown creature, unknown sound..." << std::endl;
}