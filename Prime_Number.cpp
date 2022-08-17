#include<iostream>

using namespace std;

int main()
{
    int number,flag=1;

    cout<<"Enter Number : "<<endl;
    cin>>number;

    for(int i=2;i<number;i++){
        if(number % i ==0){
            flag=0;
            break;
        }
    }

    if(flag == 1)
    cout<<number<<" is prime number"<<endl;

    else
    cout <<number<<" Not prime number"<<endl;

    return 0;
}