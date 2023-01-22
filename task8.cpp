#include <iostream>
#include <cmath>
using namespace std;
main ()
{
    int range,cargo;
    float minibus=0,truck=0,train=0;
    cout<<"Enter count of cargo for transportation:";
    cin>>range;
    for (int i=1;i<=range;i++)
    {
        cout<<"Enter tonnage of the cargo"<<i<<":";
        cin>>cargo;
        if (cargo<=3)
        {
            minibus=cargo+minibus;
        }
        if (cargo>3 && cargo<=11)
        {
            truck=cargo+truck;
        }
        if (cargo>11)
        {
            train=cargo+train;
        }
    }    
        float totaltons=minibus+truck+train;
        float price=((minibus*200)+(truck*175)+(train*120))/totaltons;
        float roundedPrice=ceil(price*100)/100;
        float Pbus=(minibus*100)/totaltons;
        float roundedPbus=ceil(Pbus*100)/100;
        float Ptruck=(truck*100)/totaltons;
        float Ptrain=(train*100)/totaltons;
        cout<<"Average price per ton of carried cargo:"<<roundedPrice<<" USD"<<endl;
        cout<<"Percentage of cargo carried by minibus:"<<roundedPbus<<"%"<<endl;
        cout<<"Percentage of cargo carried by truck:"<<Ptruck<<"%"<<endl;
        cout<<"Percentage of cargo carried by train:"<<Ptrain<<"%"<<endl;
    
}