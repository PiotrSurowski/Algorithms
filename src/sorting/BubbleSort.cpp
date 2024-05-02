#include "BubbleSort.h"
#include <iostream>

BubbleSort::BubbleSort(){}

BubbleSort::~BubbleSort(){}

void BubbleSort::sort()
{
	int numbers[10] = { 3,5,2,8,4,6,1,0,7,9 };
	int arrSize = (sizeof(numbers) / sizeof(int) - 1);
	bool unsorted;

	do
	{
		unsorted = false;
		for (int i = 0; i < arrSize; i++) {
			if(numbers[i] > numbers[i + 1]) {
				unsorted = true;
				int tmp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = tmp;
			}
		}
	} while (unsorted);

	//Wypisanie elementów posortowanej tablicy
	for (int i = 0; i <= arrSize; i++) {
		std::cout << numbers[i];
	}
}
