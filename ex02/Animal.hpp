/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 05:55:13 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/20 09:08:38 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

public :

	Animal( void );
	Animal( const Animal& ref );
	virtual ~Animal();

	Animal& operator=(const Animal& rhs);

	std::string	getType( void ) const;

	virtual void	makeSound( void ) const = 0;
	
protected :
	
	std::string type;

};





#endif