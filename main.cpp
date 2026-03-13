#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double discriminant;
    double root1;
    double root2;
    // TODO
    cin >> a >> b >> c;

    discriminant = b * b -(4)*a*c;

    root1 = (-b + sqrt(discriminant))/ (2*a);
    root2 = (-b - sqrt(discriminant))/ (2*a);

    cout << setprecision(2) << fixed;
    cout << root1 << " " << root2;
    // TODO

    return 0;
}
