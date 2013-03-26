/*----Knapsack problem algorithm----
Problem description:there are 'n' items, 
where ith item weighs 'w[i]' and has value 'p[i]' 
given the constraint of weighing capacity of 
knapsack 'W' find the optimal solution which 
maximizes value, there are unlimited copies of
each is available (not 0/1 knapsack problem)

author: Kishor Mohite
Organization: SDSLabs, IIT Roorkee
*/

#include<iostream>
using namespace std;
int K(int W,int w[],int p[],int n)
{    
    if(W==0) return 0;            //base case, knapsack with zero capacity
    else
    {
                   int max=0;
                  for(int i=0;i<n;i++)
                  {
                             if(W-w[i]>=0&&K(W-w[i],w,p,n)+p[i]>max) max=K(W-w[i],w,p,n)+p[i]; 
                             /*if optimal solution requires ith item excluding it will give the solution for knapsack with
                               capacity W-w[i] go through all items to find which one to include*/
                  }
                  return max;
    }
}
int main()
{
    int w[100],p[100],n,W;
    cin>>n;
    cin>>W;
    for(int i=0;i<n;i++) cin>>w[i]>>p[i];
    cout<<K(W,w,p,n)<<endl;
    system("pause");
}
