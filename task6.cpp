#include <iostream>
using namespace std;
main ()
{
    int range,patients,treated=0,untreated=0,sumT=0,sumU=0,count=1,doctors=7;
    cout<<"Enter the number of days you want to calculate:";
    cin>>range;
    for (int i=1;i<=range;i++)
    {
        cout<<"Enter the number of patients:";
        cin>>patients;
        if (count<3 || sumT>=sumU)
        {
            if (patients>doctors)
            {
                treated=doctors;
                untreated=patients-doctors;
            }
            if (patients<=doctors)
            {
                treated=patients;
                untreated=0;
            }
        }
        else if (count>=3 && sumU>sumT)
        {
            
            if (patients>doctors+1)
            {
                treated=doctors+1;
                untreated=patients-(doctors+1);
            }
            if (patients<=doctors+1)
            {
                treated=patients;
                untreated=0;
            }
        }

        count++;
        sumT=treated+sumT;
        sumU=untreated+sumU;

    }
    cout<<"Treated patients:"<<sumT<<endl;
    cout<<"Untreated patients:"<<sumU<<endl;


}