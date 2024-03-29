/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:39:41 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/11 10:15:01 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    int n = 2;
	Zombie *Z = zombieHorde(n, "zombie");
	for (int i = 0; i < n; i++)
		Z[i].announce();
	delete[] Z;
	return 0;
}