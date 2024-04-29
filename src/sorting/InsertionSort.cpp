/*
 * InsertionSort.cpp
 *
 *  Created on: 23 kwi 2024
 *      Author: piotr
 */

#include "InsertionSort.h"
#include <iostream>

InsertionSort::InsertionSort() {}

InsertionSort::~InsertionSort() {}

void InsertionSort::sort(){
	int numbers[10] = {3,5,2,8,4,6,1,0,7,9};
	int arrSize = (sizeof(numbers)/sizeof(int)-1);
	int indx;

	for(int i=1; i<=arrSize; i++){
		indx=i;
		while(numbers[indx]<numbers[indx-1]){
					int tmp=numbers[indx];
					numbers[indx]=numbers[indx-1];
					numbers[indx-1]=tmp;
					indx--;
			}
	}

	//Wypisanie elementów posortowanej tablicy
	for(int i=0; i<=arrSize; i++){
		std::cout << numbers[i];
	}
}

