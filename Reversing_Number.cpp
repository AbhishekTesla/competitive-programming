#include<iostream>

using namespace std;

int main()
{
    int number,rev,digit;

    cout<<"Enter the number "<<endl;
    cin>>number;
    while(number!=0){
        digit = number % 10;
        number = number/10;
        rev = rev*10 + digit;
    }

    cout<<"Reverse number is : "<<rev<<endl;

    return 0;

}