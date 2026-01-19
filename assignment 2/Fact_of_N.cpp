#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cin >> n;

    if (n < 0) {
        cout << "Error";
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << factorial;
    }

    return 0;
}