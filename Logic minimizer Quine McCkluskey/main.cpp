#include <iostream>
#include <conio.h>
#include "QMC.h"

using namespace std;

int main()
{
	QMC qmc_class;

	int reducing = 1;
	while (reducing != 0)
	{
		reducing = qmc_class.reduce_array();
	}
	qmc_class.gen_table();
	qmc_class.initiate_sorting();

	cout << "press any key to exit" << endl;
	_getch();

	return 0;
}