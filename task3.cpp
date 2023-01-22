#include <iostream>
using namespace std;
void upperPart(int rows);
void lowerPart(int rows);
main ()
{
    int rows;
    cout<<"Enter the number of rows:";
    cin>>rows;
    upperPart(rows);
    lowerPart(rows);
   
}
void upperPart(int rows)
{
    int print,c=1;
    print=rows-(rows/2);
    for (int i=print;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }

        for (int t=c;t>=1;t--)
        {
            cout<<"*";
        }
        c++;
        cout<<endl;   
    }
}
void lowerPart(int rows)
{
     int print,c=1;
    print=rows-(rows/2);
    for (int i=print;i>=1;i--)
    {
         for (int t=c;t>=1;t--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        c++;
        cout<<endl;   
    }
   
}