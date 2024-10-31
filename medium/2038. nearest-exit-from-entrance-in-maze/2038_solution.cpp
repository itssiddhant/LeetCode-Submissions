class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>> q;
        q.push({entrance[0],entrance[1]});
		
        int moves=0;
        int rows=maze.size();
        int cols=maze[0].size();
		vector<vector<int>> directions={{0,1},{1,0},{0,-1},{-1,0}};
		
        maze[entrance[0]][entrance[1]]='+';
        while(!q.empty())
        {
            int size = q.size();
            moves++;
		    for(int k=0;k<size;k++)
            {
                auto [i,j]=q.front();
                q.pop();
                for (const auto& dir : directions) {
                    int x = i + dir[0];
                    int y = j + dir[1];
                    if (x >= 0 && y >= 0 && x < rows && y < cols && maze[x][y] == '.') {
                        if ((x == 0 || y == 0 || x == rows - 1 || y == cols - 1) && !(x == entrance[0] && y == entrance[1])) {
                            return moves; 
                        }
                        maze[x][y] = '+';
                        q.push({x, y});
                    }
                }
            }
        }
        return -1;
    }
};