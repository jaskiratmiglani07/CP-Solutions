#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
 
    vector<int>scores(n);
    for(int i=0; i<n; i++)
    {
        cin>>scores[i];
    }
    int cursed = scores[k-1];
    int p=0;
    for(int i=0; i<n; i++)
    {
        if(cursed==0 && scores[i]>0)
        p++;
        else if(scores[i]>=cursed && cursed!=0)
        p++;
    }
    cout<<p;
}