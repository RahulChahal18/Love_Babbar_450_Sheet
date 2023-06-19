class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum=0;
        for(int i=0;i<K;i++){
            long temp=sum+Arr[i];
            if(temp>sum){
                sum=sum+Arr[i];
            }
        }
        long maxi=sum;
        for(int i=K;i<N;i++){
            long temp=sum+Arr[i-K];
            if(temp>sum){
                sum=sum-Arr[i-K];
            }
            if(Arr[i]+sum>sum){
                sum=sum+Arr[i];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};
