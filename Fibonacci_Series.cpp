#include <iostream>

using namespace std;

int main()
{

    int first_term =0, sec_term =1, third_term,term,i;

    cout<<"Enter the number of terms : "<<endl;

    cin>>term;

    cout<<first_term<<" "<<sec_term<<" " ;

    for(i=1;i<=term;i++){
          third_term = first_term + sec_term;
          first_term = sec_term;
          sec_term = third_term;
          cout<<third_term<<" ";
    }

    return 0;
}