

//function Template for C++

//Function to reverse the queue.
void solve(queue<int> &q){
    //base case
    if(q.size()==0){
        return;
    }
    int temp=q.front();
    q.pop();
    solve(q);
    q.push(temp);
    
}
queue<int> rev(queue<int> q)
{
    // add code here.
    solve(q);
    return q;
}
