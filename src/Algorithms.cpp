//============================================================================
// Name        : Algorithms.cpp
// Author      : Piotr Surowski
// Version     :
// Copyright   : 
// Description : Implementation of algorithms in C++, Ansi-style
//============================================================================

#include <iostream>
#include "sorting/InsertionSort.h"
#include "sorting/BubbleSort.h"
using namespace std;

int main() {
	int choice;

	std::cout << "Please choose algorithm to run:" << "\n";
	std::cout << "1 - Insertion Sort" << "\n";
	std::cout << "2 - Bubble Sort";
	std::cout << "\n";
	std::cin >> choice;

	switch(choice){
		case 1:{
			InsertionSort sort;
			sort.sort();
			break;
		}
		case 2: {
			BubbleSort sort;
			sort.sort();
			break;
		}
		default:{
			cout << "Incorrect selection - program finished";
		}

	}
	return 0;
}
