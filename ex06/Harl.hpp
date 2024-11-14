/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 02:43:26 by abekri            #+#    #+#             */
/*   Updated: 2024/11/14 00:50:32 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
	public:
		Harl();
		~Harl();
		void complain(std::string level) const;
};
#endif
