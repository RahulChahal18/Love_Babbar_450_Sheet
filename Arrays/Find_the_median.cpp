class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n=v.size();
		    sort(v.begin(),v.end());
		    
		    return n&1? v[n/2]: (v[n/2]+v[n/2 -1])/2;
		}
};
