/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:39:41 by dufama            #+#    #+#             */
/*   Updated: 2026/05/21 18:39:41 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T* array, int len, F func) {
	for (int i = 0; i < len; i++) {
		func(array[i]);
	}
}

template <typename T>
void printArray(const T& toTest) {
	std::cout << toTest  << std::endl;
}

template <typename T>
void addOne(T& toAdd) {
	toAdd += 1;
}

#endif