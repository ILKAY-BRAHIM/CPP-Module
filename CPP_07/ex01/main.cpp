/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchifour <bchifour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:41:20 by bchifour          #+#    #+#             */
/*   Updated: 2023/09/15 17:22:37 by bchifour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	char tab2[] = {'a', 'b', 'c', 'd', 'e'};
	iter(tab, 5, print);
	iter(tab2, 5, print);
	return (0);
}