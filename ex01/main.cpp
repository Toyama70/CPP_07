/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:25:19 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/25 14:41:01 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "iter.hpp"

void ft_display(char const &c)
{
	std::cout << c << std::endl;
}

int main()
{
	char buf[6];
	char c = 'a';

	for (int i = 0; i < 6 ; i++)
	{
		buf[i] = c++;
	}

	std::cout << buf << std::endl;


	iter(buf, 6, ft_display);

	std::cout << buf << std::endl;
}
/*
class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; } int get( void ) const { return this->_n; } 
	private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? 
	Awesome tab2[5];
	iter(tab, 5, print); 
	iter(tab2, 5, print);
	return 0;
}
*/


