#include<iostream>

using namespace std;

int main()
{
    int array[100],size,i,j,temp;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    
     cout<<"Enter the elements of an array : "<<endl;
     for(i=0;i<size;i++)
     {
        cin>>array[i];
     }

     for(i=0;i<size-1;i++)
     {
        for(j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
     }

     cout<<"Sorted array is :"<<endl;
     for(i=0;i<size;i++)
     {
        cout<<array[i]<<endl;
     }


    return 0;
}