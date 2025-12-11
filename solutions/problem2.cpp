#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream file("../inputs/input2.txt");

    string s;
    getline(file, s);

    reverse(s.begin(), s.end());

    string filtered;
    for (int i = 0; i < s.length(); i++) {
        if ((i + 1) % 3 != 0) filtered.push_back(s[i]);
    }

    for (char& ch : filtered) {
        ch = char(int(ch) + 2);
    }

    set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    int countV = 0;
    for (char ch : filtered) {
        if (vowels.count(ch)) countV++;
    }

    cout << countV;
    return 0;
}
