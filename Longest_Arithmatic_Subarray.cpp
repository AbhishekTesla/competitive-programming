#include<iostream>
using namespace std;

int main()
{
    int size,array[100];
    cout<<"Enter the size of array : "<<endl;
    cin>>size;

    cout<<"Enter elements : "<<endl;
    for(int i =0 ; i<size ; i++){
        cin>>array[i];
    }

    int ans = 2,j=2;
    int pd = array[1] - array[0];
    int curr = 2;

    while(j<size){
        if(pd == array[j] - array[j-1]){
            curr++;
        }

        else{
            pd=array[j] - array[j-1];
            curr=2;
        }

        ans = max(ans,curr);
        j++;

    }

    cout<<ans<<endl;


    return 0;
}