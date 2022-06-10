#include "summation.h"
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	cout << "input two intergers as a user\n";
	int val1;
	int val2 ;
	
	while (cin >> val1 >> val2) {
		int tsum = val1 + val2;
		int tmul = val1 * val2;
		int tsub = val1 - val2;
		int tdiv = val1 / val2;
		if (val1 > val2) {
			cout << "Value one is greater than value two\nWhich can be also said as.., value two is less than value one\n" << "\nThe sum is \n" << tsum  << "\nMultiplication is \n" << tmul << "\nsubtraction is\n" << tsub << "\nDivision is \n" << tdiv;

		}
		else if (val1 < val2) {
			cout << "Value one is greater than value two\nWhich can be also said as.., value two is less than value one\n" << "\nThe sum is \n" << tsum << "\nMultiplication is \n"  << tmul << "\nsubtraction is\n" << tsub << "\nDivision is \n" << tdiv;
		}
		else  { cout << "Input the correct value"; }


	}return 0;
}