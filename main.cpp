#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    // TODO
    cin >> a >> b >> c;

    double discriminant = b * b -(4)*a*c;

    double root1 = (-b + sqrt(discriminant))/ (2 * a);
    double root2 = (-b - sqrt(discriminant))/ (2 * a);

    double larger = (root1 > root2) ? root1 : root2;
    double smaller = (root1 > root2) ? root2 : root1;

    cout << setprecision(2) << fixed;

    cout << larger << " " << smaller << endl;
    // TODO

    return 0;
}
