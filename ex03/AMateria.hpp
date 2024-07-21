/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:49:06 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/21 03:49:14 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{

public:

	AMateria( std::string const & type );

	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone( void ) const = 0;

	virtual void use(ICharacter& target) = 0; // made it pure virtual

protected:

	std::string _type;
	bool		_equiped;

};



#endif