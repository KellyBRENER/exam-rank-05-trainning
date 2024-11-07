/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:50:05 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 16:10:36 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(const std::string & name, const std::string & title)
: _name(name), _title(title) {
	std::cout<<_name<<": This looks like another boring day."<<std::endl;
}


Warlock::Warlock(const Warlock & src) {
	*this = src;
}

Warlock &	Warlock::operator=(const Warlock & src) {
	if (this == &src)
		return *this;
	_name = src._name;
	_title = src._title;
	return *this;
}

Warlock::~Warlock() {
	std::cout<<_name<<": My job here is done!"<<std::endl;
}

const std::string &	Warlock::getName() const {
	return (_name);
}

const std::string & Warlock::getTitle() const {
	return (_title);
}

void	Warlock::setTitle(const std::string & src) {
	_title = src;
}

void	Warlock::introduce() const {
	std::cout<<_name<<": I am "<<_name<<", "<<_title<<"!"<<std::endl;
}
