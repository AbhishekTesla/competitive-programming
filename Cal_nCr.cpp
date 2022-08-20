#include<iostream>

using namespace std;


int fact(int n){

int fact=1;

for(int i =1;i<=n;i++){
    fact = fact * i;
}
return fact;
}


int main()
{
    int n,r;
    float ans;
    
    cout<<"Enter the value of n and r"<<endl;
    cin>>n>>r;
  if((n-r)!=0)
    ans = fact(n)/(fact(n-r)*fact(r));
  else
    ans = fact(n) / (1 * fact(r));

    cout<<"Value of nCr is : "<<ans;

return 0;
}