/*Complete the function below*/

class Solution {
public:
    bool solve(string s){
        int n=s.length();
        int start=0;
        int end=n-1;
        while(start<end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    if(!solve(to_string(a[i])) )
    	        return false;
    	}
    	return true;
    	
    }
};
