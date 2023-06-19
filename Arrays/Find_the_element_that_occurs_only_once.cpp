//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        int i=1;
        int ans=arr[0];
        while(i<N){
            ans=ans^arr[i++];
        }
        return ans;
    }
};
