#include <iostream>
using namespace std;
main()
{
    int numbers;
    float percentage=0,percentage1=0,percentage2=0,count1=0,count2=0,count=0,range;
    cout<<"Enter the numbers you want to calculate:";
    cin>>range;
    for (int i=1;i<=range;i++)
    {
        cout<<"Enter any number:";
        cin>>numbers;
        if (numbers%2==0)
        {
            count++;
        }
        if (numbers%3==0)
        {
            count1++;
        }
        if (numbers%4==0)
        {
            count2++;
        }

        
    }
    percentage=(count*100)/range;
    percentage1=(count1*100)/range;
    percentage2=(count2*100)/range;

        cout<<percentage<<"%"<<endl;
        cout<<percentage1<<"%"<<endl;
        cout<<percentage2<<"%"<<endl;
}