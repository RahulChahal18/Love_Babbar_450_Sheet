//User function template for C++

class Solution {
public:
   
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            sort(ar1, ar1 + n);
            sort(ar2, ar2 + n);
            int i=n-1;
            int j=0;
            
            while(i>=0 && j<n){
                if(ar1[i]>ar2[j]){
                    swap(ar1[i],ar2[j]);
                    i--;
                    j++;
                }
                else{
                    break;
                }
            }
            sort(ar1,ar1+n);
            sort(ar2,ar2+n);
            
            return (ar1[n-1]+ar2[0]);

    }
};
