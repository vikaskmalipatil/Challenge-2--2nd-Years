#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("../inputs/input2.txt");

    string input;
    getline(inputFile, input);

    reverse(input.begin(), input.end());

    string filtered;
    for (int i = 0; i < input.length(); i++) {
        if ((i + 1) % 3 != 0) {
            filtered.push_back(input[i]);
        }
    }

    for (char &ch : filtered) {
        ch = static_cast<char>(static_cast<int>(ch) + 2);
    }

    set<char> vowelSet = {'a', 'e', 'i', 'o', 'u',
                          'A', 'E', 'I', 'O', 'U'};

    int vowelCount = 0;
    for (char ch : filtered) {
        if (vowelSet.count(ch)) {
            vowelCount++;
        }
    }

    cout << vowelCount;
    return 0;
}
