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

		/*Note that the program is not yet complete ....this is a reminder that you should enback on it to complete the ratio part or find the ratio 
		
		
		of the intergers a user input and also be in a position to display to him or her
		suggested solution ... first find the gcd and then divide the gcd with each values both value 1 and value 2 and display them
		    --and to find the gcd you have to find the factors of each values both value 1 and 2 and then check for the repeated and similar values and then multiply them to get the gcd

		
		*/
	}return  0;
}