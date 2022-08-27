#include<iostream>
using namespace std;

int main()
{
    int size , array[100],max,min,ref;

    cout<<"Enter the size of array : "<<endl;
    cin>>size;
       
    cout<<"Enter the elemants : "<<endl;
    for(int i=0; i<size ; i++){
       cin>>array[i];
    }

    max = array[0];
    min = array[0];
    

    for(int i =0; i<size ; i++){
       
       if(max < array[i])
       max = array[i];

       if(min > array[i])
       min = array[i];
      
    }

    cout<<"Max = "<<max<<" Min = "<<min<<endl;

    return 0;
}