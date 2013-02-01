#include<iostream>
using namespace std;
int merge_sort(int[],int,int);
int merge(int[],int,int,int);
int main()
{
    int arr[100],i,j,arr_length;
    cin>>arr_length;                                               //input array length less than 100
    for(i=0;i<arr_length;i++) cin>>arr[i];
    merge_sort(arr,0,arr_length-1);
    for(i=0;i<arr_length;i++) cout<<arr[i]<<" ";                   //output sorted array
    cout<<endl;
   system("pause");
}
    
int merge_sort(int x[],int start,int end)
   {
            int q;
            if(start<end)
            {
                         q=(start+end)/2;
                         merge_sort(x,start,q);
                         merge_sort(x,q+1,end);
                         merge(x,start,q,end);
            }
   }
int merge(int x[],int start,int q, int end)
{
    int m,n;
    m=q-start+1;
    n=end-q;
    int y[1000],z[1000];
    for(int i=0;i<m;i++) y[i]=x[start+i];
    for(int i=0;i<n;i++) z[i]=x[q+i+1];
    y[m]=1000000000;
    z[n]=1000000000;
    int i=0,j=0,k;
    for(k=start;k<=end;k++)
    {
                          if(y[i]<=z[j]){
                                          x[k]=y[i];
                                          i++;
                                          }
                                          else{
                                               x[k]=z[j];
                                               j++;
                                               }
    }
}

