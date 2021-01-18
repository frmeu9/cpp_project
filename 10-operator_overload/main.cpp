#include <iostream>
#include "Duration.h"
using namespace std;

int main() {
    Duration d1(1, 45, 50);
    Duration d2(1, 15, 50);
    Duration d3(0, 8, 20);
    Duration result, result2;

    cout << d1 << " and " << d2 << endl;
    cout << "d1 + d2 = " << d1+d2 << endl;


    return 0;
}