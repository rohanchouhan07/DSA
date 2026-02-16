#include <iostream>
using namespace std;

int sumDigits(int n) {
    int s = 0;
    while (n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int su = sumDigits(arr[i]);
        
        if (su % 3 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}