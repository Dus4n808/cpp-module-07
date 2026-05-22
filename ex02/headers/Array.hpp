/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:11:14 by dufama            #+#    #+#             */
/*   Updated: 2026/05/22 13:11:14 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <new>


template <typename T>
class Array {
	private:
		T* _data;
		T _len;
		
	public:
		//FCO
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& assign);
		~Array();

		//methods
		T* addValue(int value);
		void printArray(void);
};


//default
template <typename T>
Array<T>::Array() : _data() {}

//Default unsigned
template <typename T>
Array<T>::Array(unsigned int n) {
	_len = n;
	try {
		_data = new T[n];	
	}
	catch (std::bad_alloc& e) {
		std::cout << "Error " << e.what() << std::endl;
	}
}

//copy
template <typename T>
Array<T>::Array(const Array<T>& copy) : _data(copy._data) {}

//assign
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& assign) {
	if (this != &assign) {
		_data = assign._data;
	}
	return *this;
}

//destructor
template <typename T>
Array<T>::~Array() {
		delete [] _data;
}


//methods

template <typename T>
void Array<T>::printArray() {
	for (int i = 0; i < _len; i++) {
		std::cout << _data[i] << std::endl;
	}
}

template <typename T>
T* Array<T>::addValue(int value) {
	for (int i = 0; i < _len; i++) {
		_data[i] += value;
	}
	return _data;
}


#endif