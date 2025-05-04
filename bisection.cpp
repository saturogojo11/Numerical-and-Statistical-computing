#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return x * x * x - x - 2;
}

double bisection(double a, double b, double tol) {
    double c;
    while ((b - a) >= tol) {
        c = (a + b) / 2;
        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 1, b = 2, tol = 0.0001;
    double root = bisection(a, b, tol);
    cout << "Root: " << root << endl;
    return 0;
}
