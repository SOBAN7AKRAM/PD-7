#include <iostream>
using namespace std;
main()
{
    int rows,c=0;
    cout<<"Enter number of rows:";
    cin>>rows;
    for (int i=1;i<=rows;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for (int j=rows;j>i;j--)
        {
            cout<<" ";
        }
        for (int j=rows;j>i;j--)
        {
            cout<<" ";
        }
         for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}