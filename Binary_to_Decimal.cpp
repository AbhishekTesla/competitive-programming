#include<iostream>

using namespace std;

int main()
{
    int dec, factor=1, sum ,digit;

    cout<<"Enter the Deciaml Number : "<<endl;
    cin>>dec;

    while(dec != 0)
    {
       digit = dec %2;
       dec = dec/2;
       sum = sum + digit*factor;
       factor = factor*10;
    }

      cout <<"Binary Conversion is : "<<sum;

    return 0;
}