#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double x;
    // TODO
    cin >> a >> b >> c;

    x = (-b + sqrt(b*b -(4)*a*c))/ (2*a);

    cout << setprecision(2) << fixed;
    cout << x << " ";

    x = (-b - sqrt(b*b -(4)*a*c))/ (2*a);
    cout << x;
    // TODO

    return 0;
}
