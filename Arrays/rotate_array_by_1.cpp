

//User function Template for C++

void rotate(int arr[], int n)
{
    int i=n-1;
    int temp=arr[n-1];
    while(i!=0){
        arr[i]=arr[i-1];
        i--;
    }
    arr[0]=temp;
    
    
}
