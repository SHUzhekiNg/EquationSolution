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

bool InputParams(double& a, double& b, double& c)
{
	char ch;
	while (true) {
		cout << "Please input three params: a, b, c" << endl;
		cin >> a >> b >> c; ch = getchar();
		cout << "Your input is: a = " << a << ", b = " << b << ", c = " << c << ", is it correct? (y/n)";
		ch = getchar();
		if (ch == 'Y' || ch == 'y' || ch == '\n') return true;
		else continue;
	}
	return false;
}

void RunSimple(vector<string>& ans, double a, double b, double c) {
	if (a * c <= 0) {
		ans.push_back(to_string(sqrt(-c) / a));
	}
	else {
		ans.push_back(to_string(sqrt(c) / a));
		ans.push_back(to_string(-sqrt(c) / a));
	}
}

void Run(vector<string>& ans, double a, double b, double c) {
	double delta;
	if (b == 0) {
		RunSimple(ans, a, b, c);
		return;
	}
	if (CalculateDelta(delta, a, b, c)) {
		if (delta==0) ans.push_back(to_string(-b/a));
		else {
			ans.push_back(to_string(0.5 * (-b + sqrt(delta)) / a));
			ans.push_back(to_string(0.5 * (-b - sqrt(delta)) / a));
		}
	}
	else {
		ans.push_back(to_string(0.5 * (-b) / a) + "+" + to_string(sqrt(-delta)) + "i");
		ans.push_back(to_string(0.5 * (-b) / a) + "-" + to_string(sqrt(-delta)) + "i");
	}
}

void PrintAns(vector<string>& ans) {
	int l_ans = ans.size();
	for (int i = 0; i < l_ans; i++) {
		cout << "ans" << i + 1 << ": " << ans.back() << endl;
		ans.pop_back();
	}
	system("pause");
}

void Test(vector<string>& ans) {
	double data[][3] = { {1,2,-3},{1,2,1},{1,2,3} };
	int l_data = sizeof(data) / sizeof(*data);
	for (int i = 0; i < l_data; i++) {
		Run(ans, data[i][0], data[i][1], data[i][2]);
		PrintAns(ans);
	}
}

/**
* @breif: Print welcome lines.
* @return: [int]status. 1 for regular use, 0 for test, -1 for quit.
*/
char WelcomeUI(void) {
	system("cls");
	cout << "Calculate equation in form of a*x^2+b*x+c=0." << endl;
	cout << "Please select method:" << endl;
	cout << "1: [Common] Input by keyboard." << endl;
	cout << "0: Test local data." << endl;
	cout << "q: Quit." << endl << endl;
	char inp;
	cin >> inp;
	return inp;
}