#include <iostream>
#include "Power.h"
using namespace std;

int main() {
    Power a(3, 5), b;
    a.show();   // kick=3,punch=5
    b.show();   // kick=0,punch=0
    b = 2 * a;  // 정수 * Power 객체
    a.show();   // kick=3,punch=5
    b.show();   // kick=6,punch=10
}
