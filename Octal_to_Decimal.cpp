#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int octal,digit,sum=0,i=0;

    cout<<"Enter the Octal number : "<<endl;
    cin>>octal;

    while(octal!=0){
        digit = octal %10;
        octal = octal/10;

        sum = sum + digit*pow(8,i);
        i++;
    }

    cout<<"Decimal Number is : "<<sum;

    return 0;

}