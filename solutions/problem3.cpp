#include <bits/stdc++.h>
using namespace std;

bool isPrime(int value) {
    if (value < 2) return false;

    for (int divisor = 2; divisor * divisor <= value; divisor++) {
        if (value % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream inputFile("../inputs/states.txt");

    vector<int> values;
    int number;

    while (inputFile >> number) {
        values.push_back(number);
    }

    int terminalCount = 0;

    for (int value : values) {
        if (value % 2 == 0) {
            terminalCount++;
        } else if (isPrime(value)) {
            terminalCount++;
        }
    }

    cout << terminalCount;
    return 0;
}
