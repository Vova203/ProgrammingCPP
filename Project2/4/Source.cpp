#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0)
    {
        cout << "INF" << endl;
    }
    else
    {
        if ((b * c == a * d) || (a == 0))
        {
            cout << "NO" << endl;
        }
        else
        {           
            cout << -b / a << endl;             
        }
    }
    

    return EXIT_SUCCESS;
}