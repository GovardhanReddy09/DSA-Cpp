#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

const vector<pair<int, int>> knightMoves = {
    {-2, -1}, {-1, -2}, {1, -2}, {2, -1},
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1}
};

pair<int, int> chessToIndices(string pos) {
    int col = pos[0] - 'a';
    int row = pos[1] - '1';
    return {row, col};
}

bool isValid(int row, int col) {
    return (row >= 0 && row < 8 && col >= 0 && col < 8);
}

int minKnightMoves(string start, string end) {
    pair<int, int> startIdx = chessToIndices(start);
    pair<int, int> endIdx = chessToIndices(end);
    
    if (start == end) return 0;
    
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(8, vector<bool>(8, false));
    
    q.push(startIdx);
    visited[startIdx.first][startIdx.second] = true;
    
    int moves = 0;
    
    while (!q.empty()) {
        int sz = q.size();
        
        for (int i = 0; i < sz; ++i) {
            auto curr = q.front();
            q.pop();
            
            for (auto& move : knightMoves) {
                int nr = curr.first + move.first;
                int nc = curr.second + move.second;
                
                if (isValid(nr, nc) && !visited[nr][nc]) {
                    if (nr == endIdx.first && nc == endIdx.second) {
                        return moves + 1;
                    }
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
        
        moves++;
    }
    
    return -1; 
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string start, end;
        cin >> start >> end;
        
        int minMoves = minKnightMoves(start, end);
        cout << minMoves << endl;
    }
    
    return 0;
}
