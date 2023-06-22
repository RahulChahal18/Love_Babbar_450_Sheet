//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool soln(int A[], int N, int M,int mid){
        if(M>N){
            return false;
        }
        int student =1;
        int sum=0;
        
        for(int i=0;i<N;i++){
            if(sum+A[i]<=mid){
                sum+=A[i];
            }
            else{
                student++;
                if(student>M||A[i]>mid){
                    return false;
                }
            sum=A[i];
            }
        }
        return true;
    }
    
    
    int findPages(int A[], int N, int M) 
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
           }
        int s=0;
        int e=sum;
        int mid=s+(e-s)/2;
        int ans=-1;
        
        while(s<=e){
            if(soln(A,N,M,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};
