#include<iostream>
using namespace std;
const int r=3;
const int c=2;
void print(int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<mat[i][j]<<" ";

    }
}


int main()
{
    int mat[3][2]={{1,2},{3,4},{5,6}};
    print(mat);
    return 0;
}