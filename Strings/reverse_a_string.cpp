

//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  int s=0;
  int e=str.size()-1;
  while(s<e){
      swap(str[s++],str[e--]);
  }
  return str;
}
