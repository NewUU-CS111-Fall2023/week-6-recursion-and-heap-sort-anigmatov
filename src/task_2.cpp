/*
 * Author: Abdusamad
 * Date: 23.11.2023
 * Name: Abdusamad
 */

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {

    if (n == 1) {
        return true;  
    } else if (n % 2 != 0 || n == 0) {
        return false;  
    } else {
        return isPowerOfTwo(n / 2);  
    }
}

int main() {

    int N;
    cin >> N;

    if (isPowerOfTwo(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
