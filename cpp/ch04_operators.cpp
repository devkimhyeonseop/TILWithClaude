#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // 산술 연산자
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // 증감 연산자
    int c = 5;
    cout << "c++ = " << c++ << ", c = " << c << endl;
    cout << "++c = " << ++c << endl;

    // 대입 연산자
    a += 5;
    cout << "a += 5 -> " << a << endl;

    // 비교 연산자
    cout << "a > b : " << (a > b) << endl;
    cout << "a == b: " << (a == b) << endl;

    // 논리 연산자
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << endl;
    cout << "(a < 5 || b < 5): " << (a < 5 || b < 5) << endl;
    cout << "!(a > b): " << !(a > b) << endl;

    return 0;
}
