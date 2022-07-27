#include<bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
        int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
        
        int n=grid.size();
        long long dis[n][n];
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                dis[i][j]=1e18;
            }
        }
        priority_queue<pair<long long, pair<int, int>>, vector<pair<long long, pair<int, int>>>, greater<pair<long long, pair<int, int>>>> pq;
        dis[0][0]=grid[0][0];
        pq.push({grid[0][0], {0, 0}});
        
        while(!pq.empty()) {
            pair<int, int> u = pq.top().second;
            int currD=pq.top().first;
            pq.pop();
            int x=u.first;
            int y=u.second;
            
            if(dis[x][y]<currD) continue;
            
            for(int i=0; i<4; i++) {
                int x1=x+dx[i];
                int y1=y+dy[i];
                
                if(x1>=0 && x1<n && y1>=0 && y1<n && currD+grid[x1][y1] < dis[x1][y1]) {
                    dis[x1][y1]=currD+grid[x1][y1];
                    pq.push({dis[x1][y1], {x1, y1}});
                }
                
            }
        }
     return dis[n-1][n-1];   
    }
};

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<vector<int>>grid(n, vector<int> (n-1));
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        cin >> grid[i][j];
      }
    }
    Solution obj;
    int ans = obj.minimumCostPath(grid);
    cout << ans << "\n";
  }
}
