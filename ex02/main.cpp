/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:13:50 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/25 18:54:07 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	char buf[6];
	char c = 'a';

	for (int i = 0; i < 6 ; i++)
	{
		buf[i] = c++;
	}

	Array<unsigned int> a(0);
/*
	a[0] = 5;
	a[1] = 7;
*/
	std::cout << a[0] << std::endl;
}