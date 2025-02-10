/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp00.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <malves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:55:46 by malves-b          #+#    #+#             */
/*   Updated: 2025/02/10 19:48:07 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Cachorro{
	public:
		Cachorro() : name(""), damage(5){}
		int	cast_spell()
		{
			return damage;
		}
		std::string name;
	private:
		int damage;
};
