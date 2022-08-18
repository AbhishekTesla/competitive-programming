#include<iostream>

using namespace std;

int main()
{
    int number,fact,i;
    fact=1;
    cout<<"Enter the number : "<<endl;
    cin>>number;

    for(i=1;i<=number;i++)
    {
        fact = fact*i;
    }

    cout<<"Factorial of number is "<<fact;

    return 0;
}