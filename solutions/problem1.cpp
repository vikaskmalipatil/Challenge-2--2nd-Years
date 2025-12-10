#include <bits/stdc++.h>
using namespace std;


string rotateRight(const string& row) {
    return row.back() + row.substr(0, row.length() - 1);
}


string rotateLeft(const string& row) {
    return row.substr(1) + row.front();
}

int main() {
    
    ifstream gridFile("../inputs/grid.txt");
    ifstream directionFile("../inputs/directions.txt");

    
    vector<string> grid;
    string row;
    while (getline(gridFile, row)) {
        if (!row.empty()) {
            grid.push_back(row);
        }
    }

 
    vector<char> directions;
    char dir;
    while (directionFile >> dir) {
        directions.push_back(dir);
    }

    
    vector<string> rotatedGrid;
    for (size_t i = 0; i < grid.size(); i++) {
        if (directions[i] == 'R') {
            rotatedGrid.push_back(rotateRight(grid[i]));
        } else if (directions[i] == 'L') {
            rotatedGrid.push_back(rotateLeft(grid[i]));
        }
    }

    
    int middleIndex = rotatedGrid.size() / 2;
    string middleRow = rotatedGrid[middleIndex];

    int asciiSum = 0;
    for (char ch : middleRow) {
        asciiSum += static_cast<int>(ch);
    }

    cout << asciiSum;
    return 0;
}
