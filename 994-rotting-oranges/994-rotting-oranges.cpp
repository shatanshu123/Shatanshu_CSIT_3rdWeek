//STRIVER_SDE_SHEET

class Solution {
public:

bool isValid(int i,int j,vector<vector<int>>&grid)
{
    int m=grid.size();//rows;
    int n=grid[0].size(); //columns
    
    if(i>=m or i<0 or j>=n or j<0 or grid[i][j]!=1)
        return false;
   
    return true;
}

int orangesRotting(vector<vector<int>>& grid) 
{
    
    if(grid.empty())
        return 0;
    
     int m=grid.size(); //rows
     int n=grid[0].size(); //columns
    
     int total=0;
     queue<pair<int,int>>q;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
              if(grid[i][j]!=0) 
                  total++;
             
            if(grid[i][j]==2) 
                q.push({i,j});
        }
    }
    
    int count=0;
    int ans=0;
    while(!q.empty())
    {
        int k=q.size();
        count+=k; // itne oranges rotten and covered
        while(k--)
        {
             pair<int,int>p=q.front();
             int i=p.first;
             int j=p.second;
             q.pop();
            
             if(isValid(i+1,j,grid))
             {
                 q.push({i+1,j});
                 grid[i+1][j]=2;
             }
            
            if(isValid(i,j+1,grid))
            {
                q.push({i,j+1});
                grid[i][j+1]=2;
            }
            
             if(isValid(i-1,j,grid))
             {
                 q.push({i-1,j});
                 grid[i-1][j]=2;
             }
            
            if(isValid(i,j-1,grid))
            {
                q.push({i,j-1});
                grid[i][j-1]=2;
            }
        }
        if(!q.empty())
         ans++;
    }
    if(count==total) 
        return ans;
    return -1;
}
};

