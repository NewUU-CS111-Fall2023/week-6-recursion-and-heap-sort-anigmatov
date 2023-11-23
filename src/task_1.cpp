/*
 * Author: Abdusamad
 * Date: 23.11.2023
 * Name: Abdusamad
 */

#include <iostream>
using namespace std;

void Ascending(int a, int b) {
    if (a == b) {
        cout << a << " ";
        return;
    }
    cout << a << " ";
    Ascending(a - 1, b);
}

void Descending(int a, int b) {
    if (a == b) {
        cout << a << " ";
        return;
    }
    cout << a << " ";
    Descending(a + 1, b);
}

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        Ascending(x, y);
    } else {
        Descending(x, y);
    }

    return 0;
}
