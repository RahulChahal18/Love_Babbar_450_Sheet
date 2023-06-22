
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function  
        int count=0;     //to store the count of elements <= k
        
        for(int i=0;i<n;i++){
            if(arr[i]<=k)
                count++;
        }
        int temp=0;
        // traverse over the window of size=count
        for(int i=0;i<count;i++){
            if(arr[i]<=k)
                temp++;
        }
        int ans= temp;
        
        //for remaining windows
        int i=0;
        for(int j=count;j<n;j++){
            if(arr[i]<=k)
                temp--;
            if(arr[j]<=k)
                temp++;
            ans=max(ans,temp);
            i++;
        }
        return count-ans;
    
    }
};
