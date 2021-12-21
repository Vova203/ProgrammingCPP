#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int i = 0;
	cin >> a >> b;
	while (i * i < a)
	{
		i++;
	}
	for (;i * i <= b; i++)
	{
		cout << i * i << endl;
	}
	return EXIT_SUCCESS;
}
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int i = 0;
	cin >> a >> b;
	while (i * i < a)
	{
		i++;
	}
	for (; i * i <= b; i++)
	{
		cout << i * i << endl;
	}
	return EXIT_SUCCESS;
}