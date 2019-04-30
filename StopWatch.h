#ifndef STOPWATCH
#define STOPWATCH

class StopWatch {
private:
	clock_t beginTime = 0;
	clock_t endTime = 0;
	clock_t elapsedTime = 0;

public:
	bool Start();
	bool Stop();
	bool isTicking();
	void DisplayTimerInfo();
	void reset();


};

class sort {
private:

public:
	void sortFile500();
	void sortFile5k();
	void sortFile25k();
	void sortFile100k();
	void bubbleSort(int*, int);
	void selectionSort(int*, int);
	void insertionSort(int*, int);
};
#endif
