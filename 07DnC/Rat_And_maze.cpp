#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int row, int col, int newX, int newY, int maze[][4], vector<vector<bool>>& visited) {
    if (newX >= 0 && newX < row &&
        newY >= 0 && newY < col &&
        maze[newX][newY] == 1 &&
        visited[newX][newY] == false) 
    {
        return true;
    }
    return false;
}

void PrintPath(int maze[][4], int row, int col, int srcX, int srcY, string &output, vector<vector<bool>>& visited) {

    // base case → destination reached
    if (srcX == row - 1 && srcY == col - 1) {
        cout << output << endl;
        return;
    }

    // UP
    int newX = srcX - 1;
    int newY = srcY;
    if (isPossible(row, col, newX, newY, maze, visited)) {
        visited[newX][newY] = true;
        output.push_back('U');
        PrintPath(maze, row, col, newX, newY, output, visited);
        output.pop_back();
        visited[newX][newY] = false;
    }

    // RIGHT
    newX = srcX;
    newY = srcY + 1;
    if (isPossible(row, col, newX, newY, maze, visited)) {
        visited[newX][newY] = true;
        output.push_back('R');
        PrintPath(maze, row, col, newX, newY, output, visited);
        output.pop_back();
        visited[newX][newY] = false;
    }

    // LEFT
    newX = srcX;
    newY = srcY - 1;
    if (isPossible(row, col, newX, newY, maze, visited)) {
        visited[newX][newY] = true;
        output.push_back('L');
        PrintPath(maze, row, col, newX, newY, output, visited);
        output.pop_back();
        visited[newX][newY] = false;
    }

    // DOWN
    newX = srcX + 1;
    newY = srcY;
    if (isPossible(row, col, newX, newY, maze, visited)) {
        visited[newX][newY] = true;
        output.push_back('D');
        PrintPath(maze, row, col, newX, newY, output, visited);
        output.pop_back();
        visited[newX][newY] = false;
    }
}

int main() {
    int maze[4][4] = {
        {1, 1, 0, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };

    int row = 4;
    int col = 4;

    int srcX = 0;
    int srcY = 0;

    string output = "";
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0) {
        cout << "No Path Exists" << endl;
    } else {
        visited[srcX][srcY] = true;
        PrintPath(maze, row, col, srcX, srcY, output, visited);
    }

    return 0;
}
