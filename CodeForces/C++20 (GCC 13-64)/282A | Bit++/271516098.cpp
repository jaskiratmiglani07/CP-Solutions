#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x = 0;
    int arr[n];
    string a;
    for(int i=0; i<=n; i++)
    {
        getline(cin,a);
        if(a == "X++" || a == "++X")
        x++;
        else if(a == "X--" || a == "--X")
        x--;
    }
    cout<<x;
}