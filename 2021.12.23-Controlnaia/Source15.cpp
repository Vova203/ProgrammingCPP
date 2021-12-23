#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int x1 = 1;
	int y1 = 1;
	int z1 = 1;

	int x2 = 1;
	int y2 = 1;
	int z2 = 1;

	int x3 = 1;
	int y3 = 1;
	int z3 = 1;

	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3;

	int a = (x2 * y3) + (x3 * y1) + (x1 * y2) - (x2 * y1) - (x1 * y3) - (x3 * y2);
	int b = x2 * z3 + x3 * z1 + x1 * z2 - x2 * z1 - x1 * z3 - x3 * z2;
	int c = y2 * z3 + y1 * z2 + y3 * z1 - y2 * z1 - y1 * z3 - y3 * z2;
	int s = (sqrt((a * a) + (b * b) + (c * c))) / 2;

	cout << s << endl;
	

	return EXIT_SUCCESS;
}