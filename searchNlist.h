/* W09 LAB
   Name: Shuqi Yang
   Std ID: 132162207
   Email: syang136@myseneca.ca
   Date: 03-30-2021
   -------------------------------------------------------
   I have done all the coding by myself and only copied the
   code that my professor provided to complete my workshops
   and assignments.
 */
#ifndef SEARCHNLIST_H
#define SEARCHNLIST_H
#include <iostream>	
#include "Collection.h"

using namespace std;
namespace sdds {
	/// <summary>
	/// This function template takes in 4 arguments,
	/// it goes through all the elements of the array
	/// objects and adds any match found to the Collection
	/// object.
	/// </summary>
	/// <typeparam name="T">The data type of Collection's data member m_data
	/// and the element type of array at 2nd parameter </typeparam>
	/// <typeparam name="U">The data type of </typeparam>
	/// <param name="a">A reference to a Collection of templated objects</param>
	/// <param name="b">An array of templated objects</param>
	/// <param name="num">Number of elements in the array of objects</param>
	/// <param name="key">A templated value to search for in the array of objects</param>
	/// <returns>It returns a bool that is true only if at 
	/// least one match to the key templated value(4th parameter
	///  is found in the array of objects and false otherwise.</returns>
	template<class T, class U>
	bool search(Collection<T>& a, T* b, int num, U key) {
		int match = 0;
		for (int i = 0; i < num; i++) {
			if (b[i] == key) {
				match++;
				a.add(b[i]);
			}
		}
		if (match > 0) return true;
		else return false;
	}

	/// <summary>
	/// It accepts 3 arguments and lists all the elements(prints out) of an array.
	/// </summary>
	/// <typeparam name="T">The element type of the constant array(type of the templated objects)</typeparam>
	/// <param name="title">A const char* for a Title of the list to the printed</param>
	/// <param name="obj">A constant array of templated objects</param>
	/// <param name="num">The number of elements of the array</param>
	template<class T>
	void listArrayElements(const char* title, const T* obj, int num) {
		if (title != nullptr) {
			cout << title << endl;
		}
		for (int i = 0; i < num; i++) {
			cout << i + 1 << ": " << obj[i] << endl;
		}
	}
}
#endif