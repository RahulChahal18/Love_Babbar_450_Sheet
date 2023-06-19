/*Complete the function below*/
#include<vector>
class Solution {
    bool ispalin(int k){
        int count=0;
        vector<int>temp;
        while(k!=0){
            int rem=k%10;
            temp.push_back(rem);
            k=k/10;
            count++;
        }
        int i=0;
        int j=count-1;
        while(i<j){
            if(temp[i++]!=temp[j--]){
                return false;
            }
        }
        return true;
    }
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int i=0;
    	while(i<n){
    	    if(!ispalin(a[i++])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};
