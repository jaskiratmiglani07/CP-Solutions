#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    if(n & 1)
    cout<<(n/2)*m + (m/2);
    else
    cout<<(n/2)*m;
}