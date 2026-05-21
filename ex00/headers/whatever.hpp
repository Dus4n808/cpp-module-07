/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:23:31 by dufama            #+#    #+#             */
/*   Updated: 2026/05/21 18:23:31 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(const T &a, const T &b) {
	return a > b ? a : b;
}

template <typename T>
T min(const T &a, const T &b) {
	return a < b ? a : b;
}

#endif