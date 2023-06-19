
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!=s2.length())
            return false;
            
        string temp = s1+s1;
        // Check if the second string is a substring of the concatenated string
        bool b= temp.find(s2)!= string::npos; //or temp.contains(s2);
        return b;
    }
};
