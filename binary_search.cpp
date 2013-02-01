#include<iostream>
using namespace std;
void binary_search(int[],int,int);
int main()
{
    int arr[100],i,j,arr_length,n;
    cin>>arr_length;                                               //input array length less than 100
    for(i=0;i<arr_length;i++) cin>>arr[i];                         
    for(i=1;i<arr_length;i++)                                      //sorting array
    {
                             int temp=arr[i];                      
                             for(j=i-1;j>=0&&arr[j]>temp;j--)
                             {
                                           arr[j+1]=arr[j];
                                           arr[j]=temp;
                             }
    }
    cin>>n;
    binary_search(arr,arr_length,n);
}
void binary_search(int x[],int length,int num)
{
     int mid,end,start=0,parity=0;
     for(end=length-1;start<=end;)
     {
                           mid=(start+end)/2;
                           if(x[mid]<num) start=mid+1;
                           else if(x[mid]>num) end=mid-1;
                           else if(x[mid]==num) 
                           {
                                cout<<num<<" found at index "<<mid+1<<endl;
                                parity++;
                                break;
                           }
     }
     if(parity==0) cout<<num<<" not found in array"<<endl;
}
                           
