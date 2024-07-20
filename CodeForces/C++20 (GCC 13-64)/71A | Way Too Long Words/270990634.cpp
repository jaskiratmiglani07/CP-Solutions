#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n; 
    vector<string>words(n);
    for(int i=0; i<n; i++)
    {
        cin>>words[i];
    }
    for(int i=0; i<n; i++)
    {
        if(words[i].size()>10)
        {
            char f=words[i].front();
            char l=words[i].back();
            cout<<f<<words[i].size()-2<<l<<endl;
        }
        else
        cout<<words[i]<<endl;
    }
}