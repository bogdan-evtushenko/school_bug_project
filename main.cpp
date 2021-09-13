#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	// trying to solve a * x * x + b * x + c = 0 ... but something went wrong :(
	
	double d = sqrt(b * b - 4 * a * c);
	double x1 = (-b - d) / 2 * a;
	double x2 = (-b + d) / 3 * a;
	
	cout << x1 << " " << x2 << endl;
}
