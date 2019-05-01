// INCLUDES & NAMESPACES
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <time.h>

#include "stopWatch.h"

using namespace std;



bool StopWatch::Start() {

		beginTime = clock();
		return true;
}

bool StopWatch::Stop() {
	endTime = clock();
	return true;
}

void StopWatch::DisplayTimerInfo() {
	elapsedTime = endTime - beginTime; //finds the elapsed time
	double milliseconds = elapsedTime / (CLOCKS_PER_SEC / 1000); //calculates milliseconds

																 // display real-time summary
	cout << "Time Elapsed : " << milliseconds << " milliseconds" << endl;

}

void StopWatch::reset() {
	StopWatch watch;
	if (endTime > 0 && beginTime > 0) {
		this->beginTime = 0;
		this->endTime = 0;
	}
}

void sort::sortFile500() {
	cout << "(500 elements)" << endl;

	sort sort;
	ifstream numberFile("C:\\Ball\\P02\\500.txt", ios::in);
	int listSize = 0;
	int holder = 0;
	int* list = NULL;
	int* copy = NULL;

	if (numberFile.is_open()) //if the file is open
	{
		while (!numberFile.eof()) {
			numberFile >> holder;
			listSize++;
		}

		list = new int[listSize];
		copy = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}
	sort.bubbleSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.selectionSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.insertionSort(list, listSize);

	numberFile.close();
	delete[] list;
}

void sort::sortFile5k() {
	cout << "(5k elements)" << endl;

	sort sort;
	ifstream numberFile("C:\\Ball\\P02\\5k.txt", ios::in);
	int listSize = 0;
	int holder = 0;
	int* list = NULL;

	if (numberFile.is_open()) //if the file is open
	{
		while (!numberFile.eof()) {
			numberFile >> holder;
			listSize++;
		}

		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}
	sort.bubbleSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.selectionSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.insertionSort(list, listSize);

	numberFile.close();
	delete[] list;
}

void sort::sortFile25k() {
	cout << "(25k elements)" << endl;

	sort sort;
	ifstream numberFile("C:\\Ball\\P02\\25k.txt", ios::in);
	int listSize = 0;
	int holder;
	int* list = NULL;

	if (numberFile.is_open()) //if the file is open
	{
		while (!numberFile.eof()) {
			numberFile >> holder;
			listSize++;
		}

		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}
	sort.bubbleSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.selectionSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.insertionSort(list, listSize);

	numberFile.close();
	delete[] list;
}

void sort::sortFile100k() {
	cout << "(100k elements)" << endl;

	sort sort;
	ifstream numberFile("C:\\Ball\\P02\\100k.txt", ios::in);
	int listSize = 0;
	int holder = 0;
	int* list = NULL;

	if (numberFile.is_open()) //if the file is open
	{

		while (!numberFile.eof()) {
			numberFile >> holder;
			listSize++;
		}

		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.bubbleSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.selectionSort(list, listSize);

	if (numberFile.is_open()) //if the file is open
	{
		list = new int[listSize];

		for (int i = 0; i < listSize; i++) {
			int x = 0;

			numberFile >> x;
			list[i] = x;
		}
	}

	sort.insertionSort(list, listSize);

	numberFile.close();
	delete[] list;
}

void sort::bubbleSort(int* numbersArray, int listSize) {
	StopWatch watch;

	watch.Start();

	bool swap = true;
	while (swap == true) {
		swap = false;
		for (int i = 0; i <= listSize - 2; i++) {
			int j = i + 1;
			if (numbersArray[i] > numbersArray[j]) {
				int temp = numbersArray[j];
				numbersArray[j] = numbersArray[i];
				numbersArray[i] = temp;
				swap = true;
			}
		}
	}
	watch.Stop();

	cout << "Bubble sort ";
	watch.DisplayTimerInfo();
	watch.reset();
}

void sort::selectionSort(int* numbersArray, int listSize) {
	StopWatch watch;

	watch.Start();

	for (int i = 0; i < listSize - 1; i++) {
		int currentMin = i;
		for (int j = i + 1; j < listSize; j++) {
			if (numbersArray[j] < numbersArray[currentMin])
				currentMin = j;
		}

		int tempNum = numbersArray[i];
		numbersArray[i] = numbersArray[currentMin];
		numbersArray[currentMin] = tempNum;
	}

	watch.Stop();
	cout << "Selection Sort";
	watch.DisplayTimerInfo();
	watch.reset();
}

void sort::insertionSort(int* numbersArray, int listSize) {
	StopWatch watch;

	watch.Start();

	int currentValue;
	for (int i = 1; i < listSize; i++) {
		int j = i - 1;
		currentValue = numbersArray[i];
		while (numbersArray[j] > currentValue && j >= 0) {
			numbersArray[j + 1] = numbersArray[j];
			j--;
		}
		numbersArray[j + 1] = currentValue;
	}

	watch.Stop();
	cout << "Insertion Sort";
	watch.DisplayTimerInfo();
	watch.reset();
}
