#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, r = 0;
    cin >> n;

    while (n > 0) {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    cout << "Sum = " << sum;

    return 0;
}