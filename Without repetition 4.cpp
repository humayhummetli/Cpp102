#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string text,s="";
    cin>>text;
    for(int i=0;i<text.length();i++){
        if(s.find(text[i])==string::npos) s=s+text[i];
    }
    cout<<s<<endl;
    return 0;}
