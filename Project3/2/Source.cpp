#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 1;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		s = s * 2;
	}
	cout << s << endl;
	return EXIT_SUCCESS;
}