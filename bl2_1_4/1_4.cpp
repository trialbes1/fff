/* 
 * File:   1_4.cpp
 * Author: Home
 *
 * Created on 27 Октябрь 2012 г., 19:25
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int gcd (int a,int b)
{
    if (!a) return b;
    else return gcd(b%a,a);
}
/*123

 */
int main() 
{
    int n,res;
    cout<<"input n (2<=n<=100):"<<endl;
    cin>>n;
    int a[n];
    cout<<"input a[0]=";
    cin>>a[0];
    cout<<"input a[1]=";
    cin>>a[1];
    res=fabs(a[1]-a[0]);
    
    for (int i=2;i<n;i++)
    {cout<<"input a["<<i<<"]=";
        cin>>a[i];
    res=gcd(res,fabs(a[i]-a[i-1]));
   
    }
    
    cout<<"gcd="<<res<<endl;     
    return 0;
}

