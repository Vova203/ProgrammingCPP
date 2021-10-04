#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	x = a2 - a1;
	y = b2 - b1;
	z = c2 - c1;
	cout << 3600 * x + 60 * y + z << endl;
	return EXIT_SUCCESS;
}