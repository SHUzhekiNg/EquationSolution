#include "equalation_solution.h"

int main() {
	int n;
	double a, b, c;
	vector<string> ans;

	while (true) {
		n = WelcomeUI();
		if (n == '1' && InputParams(a, b, c)) {
			Run(ans, a, b, c);
			PrintAns(ans);
		}
		else if (n == '0') Test(ans);
		else if (n == 'q' || n == 'Q') return 0;
		else continue;
	}
	
	return 0;
}