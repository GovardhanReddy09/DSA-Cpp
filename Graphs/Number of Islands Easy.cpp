

#include <iostream>
#include <vector>
using namespace std;

const vector<pair<int, int>> directions = {
    {-1, -1}, {-1, 0}, {-1, 1},
    {0, -1},         {0, 1},
    {1, -1}, {1, 0}, {1, 1}
};

void dfs(vector<vector<char>>& matrix, vector<vector<bool>>& visited, int r, int c) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    visited[r][c] = true;
    
    for (auto& dir : directions) {
        int nr = r + dir.first;
        int nc = c + dir.second;
        
        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && !visited[nr][nc] && matrix[nr][nc] == '1') {
            dfs(matrix, visited, nr, nc);
        }
    }
}

int countIslands(vector<vector<char>>& matrix) {
    if (matrix.empty()) return 0;
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    int islandCount = 0;
    
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (matrix[r][c] == '1' && !visited[r][c]) {
                dfs(matrix, visited, r, c);
                islandCount++;
            }
        }
    }
    
    return islandCount;
}

int main() {
    int T;
    cin >> T;
    
    vector<int> results;
    
    for (int t = 0; t < T; ++t) {
        int R, C;
        cin >> R >> C;
        
        vector<vector<char>> matrix(R, vector<char>(C));
        
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c < C; ++c) {
                cin >> matrix[r][c];
            }
        }
        
        int islands = countIslands(matrix);
        results.push_back(islands);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}

