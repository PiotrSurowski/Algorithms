#include "SelectionSort.h"
#include <iostream>

SelectionSort::SelectionSort(){}
SelectionSort::~SelectionSort(){}

void SelectionSort::sort() {
	int numbers[10] = { 3,5,2,8,4,6,1,0,7,9 };
	int arrSize = (sizeof(numbers) / sizeof(int) - 1);
	int min, tmp;

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i; j < arrSize; j++)
		{
			if(numbers[i] > numbers[j])
			{
				min = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = min;
			}
		}
	}

	for (int i = 0; i <= arrSize; i++) {
		std::cout << numbers[i];
	}
}

