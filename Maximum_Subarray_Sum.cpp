#include<iostream>
#include<climits>
using namespace std;

int main(){
     int n;
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
     }

     int j=0,currSum=0,mx=INT_MIN;
     while(j<n){ 
        currSum+= a[j];

        if(currSum<0){
            currSum=0;
        }

        mx=max(mx,currSum);


        j++;
     }

     cout<<mx<<endl;

    return 0;
}