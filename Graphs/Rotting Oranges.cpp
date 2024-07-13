//rotting oranges

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int orangesRotting(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int, int>> rotten;
    int freshCount = 0;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 2) {
                rotten.push({i, j});
            } else if (grid[i][j] == 1) {
                ++freshCount;
            }
        }
    }
    
    int days = 0;
    
    while (!rotten.empty() && freshCount > 0) {
        int size = rotten.size();
        bool infected = false;
        
        for (int i = 0; i < size; ++i) {
            auto [x, y] = rotten.front();
            rotten.pop();
            
            for (auto& dir : directions) {
                int nx = x + dir.first;
                int ny = y + dir.second;
                
                if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == 1) {
                    grid[nx][ny] = 2;
                    rotten.push({nx, ny});
                    --freshCount;
                    infected = true;
                }
            }
        }
        
        if (infected) {
            ++days;
        }
    }
    
    if (freshCount > 0) {
        return -1; 
    } else {
        return days;
    }
}

int main() {
    int T;
    cin >> T;
    
    vector<int> results;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<vector<int>> grid(N, vector<int>(N));
        
        for (int i = 0; i < N; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < N; ++j) {
                grid[i][j] = row[j] - '0';
            }
        }
        
        int minDays = orangesRotting(grid);
        results.push_back(minDays);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}

