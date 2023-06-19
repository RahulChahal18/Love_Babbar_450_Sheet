
class Solution
{
    string rotate(string s){
        int i=0;
        int n=s.length();
        int temp=s[0];
        while(i<=n-2){
            s[i]=s[i+1];
            i++;
        }
        s[n-1]=temp;
        return s;
    }
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
         int n1=s1.length();
         int n2=s2.length();
         if(n1!=n2){
             return 0;
         }
         int rot=0;
         while(rot<n1){
             if(s1==s2){
                 return 1;
             }
             rot++;
             s2=rotate(s2);
         }
         return 0;
    }
};
