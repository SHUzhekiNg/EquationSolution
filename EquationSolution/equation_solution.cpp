#include "equalation_solution.h"


/**
* @breif: Calculate delta while deciding which method of calcutation to use.
* @return: [bool]solution status. 1 for having real solution, 0 for not.
*/
inline bool CalculateDelta(double& delta, double a, double b, double c) {
	delta = b * b - 4 * a * c;
	if (delta < 0) return false;
	else return true;
}

bool RunSimpleB(double a, double b, double c) {
	if (a*c <= 0) {
		cout << "ans = " << sqrt(-c) / a << endl;
	}
	else {
		cout << "ans1 = " << sqrt(c) / a << "i, ans2 = " << -sqrt(c) / a << endl;
	}
	return true;
}

bool Run(double a, double b, double c) {
	double delta;
	if (b == 0) RunSimpleB(a, b, c);
	
	if (CalculateDelta(delta, a, b, c)) {

	}
}




/**
* @name: WelcomeUI
* @breif: Print welcome lines.
* @return: [bool]status. 1 for regular use, 0 for test.
*/
bool WelcomeUI(void) {
	system("cls");
	cout << "Calculate ";
}