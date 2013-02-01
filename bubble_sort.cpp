#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,arr_length;
    cin>>arr_length;                                               //input array length less than 100
    for(i=0;i<arr_length;i++) cin>>arr[i];
    
    for(i=0;i<arr_length-1;i++)
    {
                               for(j=arr_length-1;j>i;j--)
                               {
                                                          if(arr[j]<arr[j-1]){
                                                                          int temp;            //swap adjcent values if previous value is greater
                                                                          temp=arr[j];
                                                                          arr[j]=arr[j-1];
                                                                          arr[j-1]=temp;
                                                                          }
                                                                          cout<<arr[i]<<endl;
                               }
    }
    for(i=0;i<arr_length;i++) cout<<arr[i]<<" ";
    cout<<endl;
    system("pause");
} 
