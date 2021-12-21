#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int C = 1;
	cin >> n >> k;
	for (int i = n - k + 1,w = 1;i <= n; i++)
	{
		C = C * i;
		while (C % w == 0 && w <= k)
		{
			C = C / w;
			w++;
		}
	}
	cout << C << endl;
	return EXIT_SUCCESS;
}