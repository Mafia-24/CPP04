/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:34:23 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/21 03:52:17 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

public :

	Ice( void );
	Ice( const Ice& ref );

	~Ice();

	Ice&	operator=( const Ice& rhs );

	AMateria* clone() const;

	void	use(ICharacter& target);
};



#endif