/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:48:54 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/25 10:41:45 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Compare.hpp"

int main()
{
/*
	int a = 250;
	int b = 50;


	std::cout << "a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;

	std::cout << max<int>(a, b) << std::endl;
	
	std::cout << min<int>(a, b) << std::endl;
*/
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}