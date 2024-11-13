/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:47:53 by abekri            #+#    #+#             */
/*   Updated: 2024/11/12 10:44:14 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
        // Constructor
		HumanB(std::string name);
		~HumanB();
		
        // Member function
        void	setWeapon(Weapon& weapon);
		void	attack(void) const;
};

#endif
