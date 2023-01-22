#include <iostream>
using namespace std;
void sequence(int number);
main()
{
    int number;
    cout <<"Enter any number:";
    cin>>number;
    sequence(number);

}
void sequence (int number)
{
    int count=0,amplify=0;
    for (int i=1;i<=number;i++)
    {
        count++;
        if (count%4==0)
        {
            amplify=count*10;
            cout<<amplify<<" ";
        }
        else if(count%4!=0)
        {
            cout<<count<<" ";
        }
    }
    
   
}
