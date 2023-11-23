/*
 * Author: Abdusamad
 * Date: 23.11.2023
 * Name: Abdusamad
 */

#include <iostream>
using namespace std;

int sumOfDigits(int n) {

    if (n == 0) {
        return 0;
    } else {

        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {

    int N;
    cin >> N;

    cout << sumOfDigits(N) << endl;

    return 0;
}
