class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int cntfresh = 0;
        //you have also done this
        
        queue<pair<pair<int, int>, int>> q;
        //ye h thoda different step
        //isme aap kya kr rhe ho,, rotten vali ki posn store kr rhe ho
        //and usko rot krne me kitna tym laga vo store kr rhe ho
        
        //jse sbse phle hum saare rotten oranges ko queue me push kr rhe hn,, to
        //hum sabki (location, 0) daal denge queue me
        //bcz unko rot krne me to 0 hi tym laga,, bcz already rotten
        
        //hmm so ab yhan,, rotten valon ko push kr rhe ho queue me and fresh valon
        //ko count kr rhe ho
        
        //hum ek variable nhi le rhe
        //hum queue ke elements ko ek ek krke process krenge
        //hum location or time to rot store kr rhe hn,, jab bhi koi rot hoga,, to 
        //uske parent ka time me +1 krdenge hum
        //yani uske parent ko jitna tym
        
        //isme aap iss extra int se kaafi kaam bacha skte ho
        
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(grid[i][j]==2){
                    q.push(make_pair(make_pair(i, j), 0));
                }
                
                else if (grid[i][j]==1){
                    cntfresh++;
                }
            }
        }
        
        int ans = 0;
        
        while(!q.empty()){
            int r = q.front().first.first;//row locn
            int c = q.front().first.second;//colm locn
            int tm = q.front().second;//time to rot
            
            q.pop();
            {
                if(q.empty()){
                    ans = tm;
                }
            }//ab ye h final step
            //kya h ki jab last element reh jayega queue me,, 
            //to usko pop krne ke baad empty ho jayega
            //to yani vhi last me rot hua h,, or uska time vime store krlenge hum
            //or agar cntfresh =0 hogya h,, to hum iss ans ko return krdenge
            
            
            //up
            if(r-1>=0 && grid[r-1][c] == 1 ){
                grid[r-1][c] = 2;
                cntfresh--;
                q.push(make_pair(make_pair(r-1, c), tm+1));//ye cheej imp hh
            }
            
            //similarly sabka h,, 4'on dirns ka
            //down
            if(r+1<row && grid[r+1][c] == 1 ){
                grid[r+1][c] = 2;
                cntfresh--;
                q.push(make_pair(make_pair(r+1, c), tm+1));
            }
            
            
            //left
            if(c-1>=0 && grid[r][c-1] == 1 ){
                grid[r][c-1] = 2;
                cntfresh--;
                q.push(make_pair(make_pair(r, c-1), tm+1));
            }
            
            
            //right
            if(c+1<col && grid[r][c+1] == 1 ){
                grid[r][c+1] = 2;
                cntfresh--;
                q.push(make_pair(make_pair(r, c+1), tm+1));
            }
            
            
        }
        
        if(cntfresh == 0){
            return ans;
        }
        else{
            return -1;
        }
    }
};
