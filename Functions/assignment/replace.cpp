#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n == 0) {
        cout << 5;
        return 0;
    }

    int result = 0;
    int multiplier = 1;

    while (n > 0) {
        int rem = n % 10; 
        if (rem == 0) {
            rem = 5;
        }
        result = result + (rem * multiplier); 
        multiplier *= 10; 
        n /= 10;          
    }

    cout << result ;

    return 0;
}