/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 04:37:17 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/21 23:18:39 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		_learned[i] = NULL;
	}

	std::cout << "MateriaSource default constructor has been called!" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& ref )
{
	for (int i = 0; i < 4; i++)
	{
		if (!ref._learned[i])
			_learned[i] = NULL;
		if (ref._learned[i]->getType() == "ice")
			_learned[i] = new Ice((const Ice&) (*(ref._learned[i])));
		else if (ref._learned[i]->getType() == "cure")
			_learned[i] = new Cure((const Cure&) (*(ref._learned[i])));
	}

	std::cout << "MateriaSource copy constructor has been called!" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor has been called!" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete (this->_learned[i]);
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs )
{
	std::cout << "MateriaSource copy assignment operator has been called!" << std::endl;

	if (this == &rhs)
	{
		return (*this);
	}

	for (int i = 0; i < 4; i++)
	{
		if (!rhs._learned[i])
			_learned[i] = NULL;
		if (rhs._learned[i]->getType() == "ice")
			_learned[i] = new Ice((const Ice&) (*(rhs._learned[i])));
		else if (rhs._learned[i]->getType() == "cure")
			_learned[i] = new Cure((const Cure&) (*(rhs._learned[i])));
	}

	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_learned[i])
		{
			this->_learned[i] = m;
			std::cout << "Materia " << m->getType() << " has been learned successfully!" << std::endl;
			return ;
		}
	}

	std::cout << "This MateriaSource can not learn more Materias!" << std::endl;
	delete (m);
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] && (this->_learned[i]->getType() == type))
		{
			if (type == "ice")
				return (new Ice((const Ice&) (*(_learned[i]))));
			else if (type == "cure")
				return (new Cure((const Cure&) (*(_learned[i]))));
		}
	}

	std::cout << "The Materia type : (" << type << ") is unknown for this MateriaSource!" << std::endl;
	return ((AMateria*) 0);
}