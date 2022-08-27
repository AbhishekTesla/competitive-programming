#include<iostream>
using namespace std;
 

int main()
{
    int array[100],size,i,j,count=1,visited[100];
    

    cout<<"Enter the size of array : "<<endl;
    cin>>size;

    visited[size]={0};

    cout<<"Enter the elemants :"<<endl;

    for(i=0;i<size;i++){
        cin>>array[i];
    }

    for(i=0;i<size;i++){
        if(visited[i]==1)
        continue;

        else{

        for(j=i+1;j<size;j++){
            if(array[i] == array[j])
            {
            visited[j]=1;
            count++;
            }

        }


        cout<<array[i]<<" "<<count<<endl;
        }

        count=1;
    }

    return 0;
}