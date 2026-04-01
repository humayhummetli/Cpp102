
#include <iostream>
using namespace std;

int main()
{
    string num;
    int number=0;
    cin>>num;
    for(int i=0;i<num.length();i++)
         number=number+num[i]-'0'; 


    if(number%3==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    if(number%3==0 && num[num.length()-1]%2==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    if(number%9==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
