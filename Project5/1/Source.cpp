#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0; 
	int b = 0; 
	cin >> n >> a >> b;

	int abit = (n & (1 << a)) >> a;
	n = n & (~(1 << a));
	int bbit = (n & (1 << a)) >> a;
	n = n & (~(1 << b));
	n = n | (abit << b) | (bbit << a);

	cout << n << endl;

	return EXIT_SUCCESS;
}