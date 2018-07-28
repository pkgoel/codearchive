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
    long n,i,element,mn,diff;
    cin>>n;
    cin>>element;
    diff = -1;
    mn = element;
    for(i=1;i<n;i++)
    {
        cin>>element;
        if(element<mn)
        {
            mn = element;
            continue;
        }
        diff = diff>element-mn?diff:element-mn;
    }
    cout<<diff;
    return 0;
}
