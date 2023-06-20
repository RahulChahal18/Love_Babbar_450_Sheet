#include <bits/stdc++.h>
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int fresh=0;

        //push saare rotted ones ko queue me
      //using these for loops, we push the rotten ones into the queue
      //and get the count of fresh oranges
        queue<pair<int,int>> q;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1)
                    fresh++;
                if(grid[i][j]==2)
                    q.push(make_pair(i,j));
            }
        }

        if(fresh==0)//no fresh oranges,, nothing to rot
            return 0;

        int ans=0;
                
        while(!q.empty()){

            int size=q.size();
            bool b= false; // this bool b tells us if any of the oranges has been rotten b the elements in the queue
                          //only if it is true,, then we increase the count or the time
            // Process all the elements currently in the queue
            while(size--){
            // Extract the front element from the queue
                pair<int,int> p=q.front();
                q.pop();
                int irow=p.first;
                int icol=p.second;
                

                //up
                if(  irow>0 && grid[irow-1][icol]==1 ){
                    grid[irow-1][icol]=2;
                    b=true;
                    q.push(make_pair(irow-1,icol));
                    fresh--;
                }
                
                //down
                if(  irow+1<row && grid[irow+1][icol]==1){
                    grid[irow+1][icol]=2;
                    b=true;
                    q.push(make_pair(irow+1,icol));
                    fresh--;
                }

                //left
                if( icol>0 && grid[irow][icol-1]==1){
                    grid[irow][icol-1]=2;
                    b=true;
                    q.push(make_pair(irow,icol-1));
                    fresh--;
                }

                //right
                if( icol+1<col && grid[irow][icol+1]==1 ){
                    grid[irow][icol+1]=2;
                    b=true;
                    q.push(make_pair(irow,icol+1));
                    fresh--;
                }
            }
            if(b)
                ans++;
        }

        if(fresh==0) //if no fresh oranges are left now,, that means all have been rotten and we have got our time
            return ans;
        //if we come hee=re,, that means,, some of the fresh oranges are still left
        //that means there is no way in which all the oranges can be rotten,, so we return -1.
        return -1;        

    }
};
