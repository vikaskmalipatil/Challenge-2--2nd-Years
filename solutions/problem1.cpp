#include <bits/stdc++.h>
using namespace std;

string rotateRight(const string& s) {
    return s.back() + s.substr(0, s.size() - 1);
}

string rotateLeft(const string& s) {
    return s.substr(1) + s.front();
}

int main() {
    ifstream gridFile("../inputs/grid.txt");
    ifstream dirFile("../inputs/directions.txt");

    vector<string> grid;
    string line;
    while (getline(gridFile, line)) {
        if (!line.empty()) grid.push_back(line);
    }

    vector<char> dirs;
    char d;
    while (dirFile >> d) dirs.push_back(d);

    vector<string> rotated;
    for (size_t i = 0; i < grid.size(); i++) {
        if (dirs[i] == 'R') rotated.push_back(rotateRight(grid[i]));
        else rotated.push_back(rotateLeft(grid[i]));
    }

    string mid = rotated[rotated.size() / 2];
    int sum = 0;
    for (char c : mid) sum += int(c);

    cout << sum;
    return 0;
}
