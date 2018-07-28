/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,j,rt,mn,temp,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int arr[n+1];
    arr[1]=1;
    for(i=2;i<=n;i++)
    {
        rt = sqrt(i);
        mn = arr[1]+arr[i-1];
        if(rt*rt==i)
        {
            arr[i]=1;
            continue;
        }
        for(j=1;j<=rt;j++)
        {
            temp = arr[j*j]+arr[i-j*j];
            mn = mn>temp?temp:mn;
        }
        arr[i]=mn;
    }
    cout<<arr[n]<<endl;
    }
    return 0;
}
