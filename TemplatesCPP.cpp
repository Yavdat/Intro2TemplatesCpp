#include <iostream>

using namespace std;

// int Sqr(int x) {
    // return x * x;
// }

// double Sqr(double x) {
    // return x * x;
// }

template <typename First, typename Second>
pair<First, Second> operator * (const pair<First, Second>& p1, const pair<First, Second>& p2) {
    First f = p1.first * p2.first;
    Second s = p1.second * p2.second;
    return make_pair(f, s);
}

template <typename T>
T Sqr(T x) {
    return x * x;
}

int main() {
    cout << Sqr(2.5) << endl;   // 6.25
    cout << Sqr(2) << endl;     // 4

    // возведение в квадрат пары
    auto p = make_pair(2.5, 2);
    auto res = Sqr(p);

    cout << res.first << " " << res.second << endl; // то же самое, только в профиль

    return 0;
}