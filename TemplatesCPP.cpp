#include <iostream>

using namespace std;

// int Sqr(int x) {
    // return x * x;
// }

// double Sqr(double x) {
    // return x * x;
// }

template <typename T>
T Sqr(T x) {
    return x * x;
}

int main() {
    cout << Sqr(2.5) << endl;   // 6.25
    cout << Sqr(2) << endl;     // 4
    return 0;
}