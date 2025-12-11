#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream file("../inputs/states.txt");

    vector<int> nums;
    int x;
    while (file >> x) nums.push_back(x);

    int done = 0;
    for (int n : nums) {
        if (isPrime(n)) done++;
    }

    cout << done;
    return 0;
}
