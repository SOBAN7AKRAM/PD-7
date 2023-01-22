#include <iostream>
using namespace std;
int triangle(int sequence);
main ()
{
    int sequence=0,dots=0;
    cout<<"Enter the number of sequence:";
    cin>>sequence;
    dots=triangle(sequence);
    cout<<dots;

}
int triangle(int sequence)
{
    int count=0,dots=0;
    for (int i=1;i<=sequence;i++)
    {
        count++;
        dots=count+dots;
        
    }
    return dots;
    
}