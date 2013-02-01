#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,arr_length;
    cin>>arr_length;                                               //input array length less than 100
    for(i=0;i<arr_length;i++) cin>>arr[i];
    
    for(i=0;i<arr_length;i++)
    {
                             int index=i,min;
                             min=arr[i];
                             for(j=i;j<arr_length;j++)
                             {
                                                        if(arr[j]<min)
                                                        {
                                                           min=arr[j];
                                                           index=j;
                                                        }
                             }
                             arr[index]=arr[i];
                             arr[i]=min;
    }
     for(i=0;i<arr_length;i++) cout<<arr[i]<<" ";
    cout<<endl;
    system("pause");
}
