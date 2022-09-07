#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }

    int maxF=0;
    char chr = 'a';

    for(int i=0;i<str.length();i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            chr = i + 'a';
        }
    }

    cout<<maxF<<" "<<chr<<endl;


    return 0;
}