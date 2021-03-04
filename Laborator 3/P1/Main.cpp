#include "Math.h"
#include <iostream>
using namespace std;
int main()
{
    Math operation;

    int a = 1, b = 2, c = 3;
    double x = 1.0, y = 2.0, z = 3.0;
    char s1[] = "abc", s2[] = "def";
    cout << operation.Add(a, b)<<'\n';
    cout << operation.Add(a, b, c) << '\n';

    cout << operation.Add(x, y) << '\n';
    cout << operation.Add(x, y, z) << '\n';

    cout << operation.Mul(a, b) << '\n';
    cout << operation.Mul(a, b, c) << '\n';

    cout << operation.Mul(x, y) << '\n';
    cout << operation.Mul(x, y, z) << '\n';

    cout << operation.Add(4, a, b, c, 5) << '\n';

    cout << operation.Add(s1, s2);

}
