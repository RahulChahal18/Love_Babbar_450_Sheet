class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0;
            int j=0;
            int k=0;
            int arr3[m+n]={0};
            while(i<n && j<m){
                 if(arr1[i]<arr2[j]){
                   arr3[k]=arr1[i];
                   //cout<<arr3[k]<<"  ";
                   i++;
                   k++;
                 }
            
                else if(arr1[i]==arr2[j]){
                   arr3[k]=arr1[i];
                   i++;
                   //cout<<arr3[k]<<"  ";
                   k++;
                   arr3[k]=arr2[j];
                   //cout<<arr3[k]<<"  ";
                     j++;
                     k++;
                 }
                else if(arr1[i]>arr2[j]){
                  arr3[k]=arr2[j];
                  //cout<<arr3[k]<<"  ";
                  j++;
                  k++;
              }
           }
           
           while(i<n){
               arr3[k]=arr1[i];
               //cout<<arr3[k]<<"  ";
               i++;
               k++;
           }
           while(j<m){
               arr3[k]=arr2[j];
               //cout<<arr3[k]<<"  ";
               j++;
               k++;
           }
           
           int f=0;
        for(;f<n;f++){
            arr1[f]=arr3[f];
        } 
        for(int j=0;j<m;j++){
            arr2[j]=arr3[f];
            f++;
            //cout<<arr2[j]<<"  " ;
        }
        
        //cout<<endl;
        //cout<<"im here: "<<arr3[17];
        //cout<<endl;
        } 
};
