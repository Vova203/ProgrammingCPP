#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    cin >> a >> b >> c;
    if (a + b < c)
    {
        if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)))
        {
            cout << "right" << endl;
        }
        else
        {
            s1 = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / 2 * a * b;
            s2 = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / 2 * b * c;
            s3 = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / 2 * a * c;
            if (s1 > 0 && s2 > 0 && s3 > 0)
            {
                cout << "acute" << endl;
            }
            else
            {
                cout << "obtuse" << endl;
            }
        }
    }
    else
    {
        cout << "impossible" << endl;
    }

    return EXIT_SUCCESS;
}