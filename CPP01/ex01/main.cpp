/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:59:47 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/28 22:55:53 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    	Zombie *horde = zombieHorde(20, "MIGUEL");

	for (int i = 0; i < 20; i++)
		horde[i].announce();

	delete[](horde);
}