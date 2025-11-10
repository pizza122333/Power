#ifndef POWER_H
#define POWER_H

#include <iostream>
using namespace std;

class Power {
private:
    int kick;
    int punch;

public:
    Power();                 // 기본 생성자
    Power(int k, int p);     // 매개변수 생성자
    void show() const;       // 출력 함수

    // 프렌드 함수: 정수 * Power
    friend Power operator*(int n, const Power& p);
};

#endif
