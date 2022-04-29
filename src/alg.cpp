// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  using namespace std;
    cout << pow(value,n);
    return 0;
}

uint64_t fact(uint16_t n) {
  using namespace std;
    uint64_t k = n , j = n ;
    for (uint64_t i = 1; i <= j - 1; i++) {
        k = k * i;
    }
    return k;
}

double calcItem(double x, uint16_t n) {
  using namespace std;
    double k;
    cout.setf(ios::fixed);
    cout.precision(19);
    k = x / fact(n);
    return k;
}

double expn(double x, uint16_t count) {
  using namespace std;
    double k = 1;
    cout.setf(ios::fixed);
    cout.precision(16);
    for (uint16_t i = 1; i <= count; i++) {
        k = k + (pow(x, i) / fact(i));
    }
    return k;
}

double sinn(double x, uint16_t count) {
  using namespace std;
    double k = 0;
    uint16_t i , j;
    cout.setf(ios::fixed);
    cout.precision(16);
    for (uint16_t n = 1; n <= count; n++) {
        i = (2 * n) - 1;
        j = n - 1;
        k = k + (pow(-1, j) * (pow(x, i) / fact(i)));
    }
    return k;
}

double cosn(double x, uint16_t count) {
  using namespace std;
    double k = 1;
    uint16_t i, j;
    cout.setf(ios::fixed);
    cout.precision(17);
    for (uint16_t n = 2; n <= count; n++) {
        i = (2 * n) - 2;
        j = n - 1;
        k = k + (pow(-1, j) * (pow(x, i) / fact(i)));
    }
    return k;
}
