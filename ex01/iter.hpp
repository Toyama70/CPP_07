/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:25:16 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/25 14:37:41 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void	iter(T tab[], int n, void fct(T const & e))// to continue
{
	for (int i = 0; i < n; i++)
	{
		fct(tab[i]);
	}
}


#endif