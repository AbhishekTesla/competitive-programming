#include<iostream>

using namespace std;

int main()
{
    int number , temp , digit , sum;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    sum=0;

    temp = number;

    while(temp!=0)
    {
        digit = temp %10;
        sum = sum + digit*digit*digit;
        temp = temp / 10;
    }

    if(sum == number)
    cout<<"Number is Armstrong number"<<endl;

    else
    cout<<"Number is not Armstrong number"<<endl;
    
    return 0;

}