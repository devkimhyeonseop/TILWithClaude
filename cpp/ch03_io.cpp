#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "이름을 입력하세요: ";
    cin >> name;

    cout << "나이를 입력하세요: ";
    cin >> age;

    cout << "안녕하세요, " << name << "님! " << age << "살이시군요." << endl;

    int a = 10;
    int b = 20;
    int sum = a+b;
    cout << "두수의 합은 " << sum << "입니다." << endl;

    return 0;
}
