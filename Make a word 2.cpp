#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string text1,text2;
    cin>>text1;
    cin>>text2;
    for(int i=0;i<text2.length();i++){
        if(text1.find(text2[i])!=string::npos){
            if(i==text2.length()-1) cout<<"Ok";
        }
        else{
            cout<<"No";
            return 0;
        }
    }
    return 0;
}
