#include<iostream>
using namespace std;

int Binary_Search(int array[] , int low , int high , int key){
  int mid;

  if(low>high)
  return -1;

  mid = (low + high)/2;
  if(key==array[mid])
   return mid +1;

   else if(array[mid]>key)
   return Binary_Search(array,low,mid-1,key);

   else
   return Binary_Search(array,mid+1,high,key);


}

int main()
{
    int array[100],size,key,ans;
    cout<<"Enter the number of elements : "<<endl;
    cin>>size;

    cout<<"Enter the elements in ascending order : "<<endl;
    for(int i =0 ; i<size ; i++){
        cin>>array[i];
    }

    cout<<"Enter element want to search "<<endl;
    cin>>key;

    ans=Binary_Search(array,0,size-1,key);
  
  if(ans == -1)
  cout<<"Element is not present"<<endl;

  else
  cout<<"Element is present at "<<ans<<endl;


    return 0;
}