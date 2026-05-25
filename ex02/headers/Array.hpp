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
#include <cstddef>
#include <exception>
#include <iostream>


template <typename T>
class Array {
	private:
		T* _data;
		unsigned int _len;
		
	public:
		// ===== FCO =====
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& assign);
		T& operator[](unsigned int index);
		~Array();

		// ===== Methods =====
		T* addValue(int value);
		void printArray(void);
		unsigned int size(void) const;

		// ===== Exception =====
		class OutOfBounds : public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Out of index";
				}
		};
};

// ================================================================ //
// Default Constructor                       
// ================================================================ //

template <typename T>
Array<T>::Array() : _data(NULL), _len(0) {}


// ================================================================ //
// Default Constructor (unsigned int)                       
// ================================================================ //

template <typename T>
Array<T>::Array(unsigned int n) {
	_len = n;
	_data = new T[n]();
}


// ================================================================ //
// Copy Constructor                       
// ================================================================ //

template <typename T>
Array<T>::Array(const Array<T>& copy) {
	_len = copy._len;
	_data = new T[_len];

	for (unsigned int i = 0; i < _len; i++) {
		_data[i] = copy._data[i];
	}
}


// ================================================================ //
// Overload Operator                       
// ================================================================ //

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& assign) {
	if (this != &assign) {
		delete [] _data;
		_len = assign._len;
		_data = new T[_len];
		// ===== Deep copy =====
		for (unsigned int i = 0; i < _len; i++) {
			_data[i] = assign._data[i];
		}
	}
	return *this;
}


template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _len) {
		throw OutOfBounds();
	}
	return _data[index];
}

// ================================================================ //
// Destructor                       
// ================================================================ //

template <typename T>
Array<T>::~Array() {
	delete [] _data;
}


// ================================================================ //
// Methods                       
// ================================================================ //

template <typename T>
void Array<T>::printArray() {
	for (unsigned int i = 0; i < _len; i++) {
		std::cout << _data[i] << std::endl;
	}
}


template <typename T>
T* Array<T>::addValue(int value) {
	for (unsigned int i = 0; i < _len; i++) {
		_data[i] += value;
	}
	return _data;
}

template <typename T>
unsigned int Array<T>::size() const {
	return _len;
}


#endif