/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:12:44 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 16:19:48 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <string>

#ifndef ASPELL_HPP
#define ASPELL_HPP

class	ASpell {
	protected :
		std::string	name;
		std::string	effects;
	public:
		ASpell(const std::string & Name, const std::string & Effects);
		std::string	getName() const;
		std::string	getEffects() const;
		ASpell*	clone() const;
}

#endif
