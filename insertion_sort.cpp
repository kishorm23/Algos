#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,arr_length;
    cin>>arr_length;                                               //input array length less than 100
    for(i=0;i<arr_length;i++) cin>>arr[i];
    
    for(i=1;i<arr_length;i++)
    {
                             int temp=arr[i];                      //swap continuously until element smaller than temp is not found 
                             for(j=i-1;j>=0&&arr[j]>temp;j--)
                             {
                                           arr[j+1]=arr[j];
                                           arr[j]=temp;
                             }
    }
    for(i=0;i<arr_length;i++) cout<<arr[i]<<" ";
    cout<<endl;
    system("pause");
}     
