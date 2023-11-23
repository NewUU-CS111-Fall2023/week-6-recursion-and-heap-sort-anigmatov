/*
 * Author: Abdusamad
 * Date: 23.11.2023
 * Name: Abdusamad
 */

#include <iostream>
#include <cstring>
using namespace std;


bool isPalindrome(const char* word, int start, int end) {

    if (start >= end) {
        return true;  
    } else if (word[start] != word[end]) {
        return false; 
    } else {
        return isPalindrome(word, start + 1, end - 1);
    }
}

int main() {

    char word[100];
    cin >> word;

    if (isPalindrome(word, 0, strlen(word) - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
