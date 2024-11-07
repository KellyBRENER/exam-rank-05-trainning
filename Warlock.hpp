/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:29:29 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 16:09:59 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <string>
#include <iostream>

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

class	Warlock {
	private :
		std::string	_name;
		std::string	_title;
		Warlock();
		Warlock(const Warlock & src);
		Warlock &	operator=(const Warlock & src);
	public:

		Warlock(const std::string & name, const std::string & title);
		~Warlock();

		const std::string &	getName() const;
		const std::string &	getTitle() const;
		void	setTitle(const std::string & src);
		void introduce() const;
} ;

#endif
