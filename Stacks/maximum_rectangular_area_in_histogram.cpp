class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    void getNextMin(long long arr[], int n,vector<long long>&a){
        
        stack<long long>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.top()==-1)
                a[i]=n;
            else
                a[i]=st.top();
            st.push(i);
        }
        
    }
    
    void getPrevMin(long long arr[], int n,vector<long long>&b){
        
        stack<long long>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            b[i]=st.top();
            st.push(i);
        }
        
    }
    
    
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>a(n);
        vector<long long>b(n);
        getNextMin(arr,n,a);
        getPrevMin(arr,n,b);
        
        long long area=-1;
        for(int i=0;i<n;i++){
            long long len=arr[i];
            long long bred=a[i]-b[i]-1;
            long long newArea=len*bred;
            area=max(area,newArea);
        }
        return area;
        
        
        
        /*
        stack<long long> s;
        long long maxArea= INT_MIN;
        for(int i=0;i<=n;i++){
            while(!s.empty()&&(i==n||arr[s.top()]>=arr[i])){
                long long hgh=arr[s.top()];
                s.pop();
                long long wdt;
                if(s.empty()) wdt=i;
                else wdt = i-s.top()-1;
                maxArea=max(maxArea,hgh*wdt);
            }
            s.push(i);
        }
        return maxArea;*/
        
        
    }
};
