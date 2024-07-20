#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> >matrix(5,vector<int>(5,0));
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int ith = 0;
    int jth = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(matrix[i][j]==1)
            {
                ith=i;
                jth=j;
            }
        }
    }
    int moves = 0;
    //if 1 is not in the 3rd row, bring it to the third row
    //if 1 is in the 3rd row but not in the 3rd column, bring it to the third column
    while(matrix[2][2]!=1)
    {
    if(ith == 2)
    {
        while(jth!=2)
        {
            if(jth<2)
            {
                swap(matrix[2][jth],matrix[2][jth+1]);
                jth++;
                moves++;
            }
            else
            {
                swap(matrix[2][jth],matrix[2][jth-1]);
                jth--;
                moves++;
            }
        }
 
    }
    else
    {
        while(ith!=2)
        {
            if(ith<2)
            {
                swap(matrix[ith][jth],matrix[ith+1][jth]);
                ith++;
                moves++;
            }
            else
            {
                swap(matrix[ith][jth],matrix[ith-1][jth]);
                ith--;
                moves++;
            }
        }
    }
    }
    cout<<moves<<endl;
}