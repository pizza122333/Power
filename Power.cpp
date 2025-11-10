#include "Power.h"

// 기본 생성자
Power::Power() : kick(0), punch(0) {}

// 매개변수 생성자
Power::Power(int k, int p) : kick(k), punch(p) {}

// 출력 함수
void Power::show() const {
    cout << "kick=" << kick << ",punch=" << punch << endl;
}

// 프렌드 함수 정의
Power operator*(int n, const Power& p) {
    return Power(n * p.kick, n * p.punch);
}
