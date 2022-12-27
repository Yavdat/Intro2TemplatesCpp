#include <iostream>

using namespace std;

int Sqr(int x) {
    return x * x;
}

double Sqr(double x) {
    return x * x;
}

int main() {
    cout << Sqr(2.5) << endl;
    return 0;
}