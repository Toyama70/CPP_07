/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Compare.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:48:49 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/25 13:09:39 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARE_HPP
#define COMPARE_HPP

#include <iostream>

template <typename T>
T const & max(T const &x, T const &y)
{
	if (x == y) 
		return y;
	else 
		return (x >= y) ? x : y;
}

template <typename T>
T const & min(T const &x, T const &y)
{
	if (x == y) 
		return y;
	else 
		return (x <= y) ? x : y;
}

template <typename T>
void swap(T &x, T &y)
{
	T z;
	z = y;
	y = x;
	x = z;
}
#endif