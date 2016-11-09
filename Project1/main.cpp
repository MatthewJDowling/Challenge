#include <iostream>
#include "SuperSum.h"
using namespace std;

int main()
{
	cout << "K?\n";
	int menuitem;
	cin >> menuitem;
	cout << "N?\n";

	int NUitem;
	cin >> NUitem;
	cout << "The answer is " << SuperSum(menuitem, NUitem) << ".\n";
	system("pause");
}