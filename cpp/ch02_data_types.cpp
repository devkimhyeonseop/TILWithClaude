#include <iostream>
using namespace std;

int main() {
    int age = 26;
    short s = 100;
    long long big = 1234567890123LL;
    float f = 3.14f;
    double d = 3.141592653589793;
    char c = 'A';
    bool isStudent = true;

    cout << "int: " << age << ", " << sizeof(age) << " bytes" << endl;
    cout << "short: " << s << ", " << sizeof(s) << " bytes" << endl;
    cout << "long long: " << big << ", " << sizeof(big) << " bytes" << endl;
    cout << "float: " << f << ", " << sizeof(f) << " bytes" << endl;
    cout << "double: " << d << ", " << sizeof(d) << " bytes" << endl;
    cout << "char: " << c << ", " << sizeof(c) << " byte" << endl;
    cout << "bool: " << isStudent << ", " << sizeof(isStudent) << " byte" << endl;

    // 형변환
    int x = static_cast<int>(f);
    cout << "float -> int: " << x << endl;

    return 0;
}
