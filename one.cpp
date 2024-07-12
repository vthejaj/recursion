#include<iostream>
using namespace std;

void A(int n) {
    if (n > 0) {
        A(n-1);
        cout << n;
        A(n-1);
    }
}

int main() {
    A(5);
    return 0;
}