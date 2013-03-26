/*----Knapsack problem algorithm----
Problem description:there are 'n' items, 
where ith item weighs 'w[i]' and has value 'p[i]' 
given the constraint of weighing capacity of 
knapsack 'W' find the optimal solution which 
maximizes value (0/1 knapsack)

author: Kishor Mohite
Organization: SDSLabs, IIT Roorkee
*/

#include<iostream>
using namespace std;

int ma(int a,int b)
{if(a>b) return a; else return b;}

int K(int W,int w[],int p[],int n)
{    
    if(W==0||n==0) return 0;            //base case, knapsack with zero capacity
    else
    {
                   int max=0;
                  for(int i=0;i<n;i++)
                  {
                             if(w[i]>W) max=K(W,w,p,i);
                             else  max=ma(K(W-w[i],w,p,i)+p[i],K(W,w,p,i)); 
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
