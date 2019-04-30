// INCLUDES & NAMESPACES
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <time.h>

#include "stopWatch.h"

using namespace std;

int main() {
	sort sort;

	sort.sortFile500();
	sort.sortFile5k();
	sort.sortFile25k();
	sort.sortFile100k();

	_getch();
	return 0;
}
