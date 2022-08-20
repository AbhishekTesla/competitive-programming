#include<iostream>
using namespace std;

void Prime_Number(int num1,int num2){
 int flage;
    for (int i = num1; i <= num2; i++)
    {
        flage = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                flage = 0;
            break;
        }

        if (flage == 1)
            cout << i << " is prime number" << endl;
    }
}


int main()
{
    int num1,num2;

    cout<<"Enter the Two number : "<<endl;
    cin>>num1>>num2;
    
    Prime_Number(num1,num2);
  return 0; 
}