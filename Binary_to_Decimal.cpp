#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int binary,digit,decimal,i=0;

    cout<<"Enter the binary number : "<<endl;
    cin>>binary;

    while(binary!=0){
        digit = binary%10;
        binary = binary/10;
        decimal = decimal + digit*pow(2,i);
        i++;
    }

    cout<<"Decimal is "<<decimal;
 
    return 0;
}