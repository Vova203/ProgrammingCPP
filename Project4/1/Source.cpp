#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//1
	int a[100]{ 0 };
	int n = 0;
	cin >> n;

	//2
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	//3
	cout <<"ARRAY : "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	//4
	cout <<"EVEN : "<< endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	//5
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	cout <<"SUM : "<< sum << endl;
	
	//6
	int p = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			p *= a[i];
		}
	}
	cout <<"PRODUCT OF NEGATIVE : "<< p << endl;

	//7
	int io = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[io])
		{
			io = i;
		}
	}
	cout <<"FIRST MIN INDEX : "<< io << endl;

	//8
	int m1 = a[0];
	int m2 = a[1];
	if (m1 < m2)
	{
		int t = m1;
		m1 = m2;
		m2 = t;
	}
	for (int i = 0; i < n; i++)
	{
		if (m1 < a[i])
		{
			m2 = m1;
			m1 = a[i];
		}
		else
		{
			if (m2 < a[i])
			{
				m2 = a[i];
			}
		}
	}
	cout <<"SECOND MAX : "<< m2 << endl;

	//9
	cout << "REVERSE : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[n - 1 - i] << " ";
	}
	cout << endl;

	//10
	cout << "ODD INDEXES : " << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}