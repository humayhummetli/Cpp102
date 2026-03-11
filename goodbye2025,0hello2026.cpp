//input;goodbye2025,0hello2026
//output;count=3 sum=4051

#include <iostream>

using namespace std;

int main() 
{
    string text;
    int sum=0,count=0;
    int number=0;
    getline(cin,text);
    for(int i=0;i<text.length();i++){
      if(isdigit(text[i])){
        number=number*10+text[i]-'0';
      }
      else if(number>0){
        count++;
        sum=sum+number;
        number=0;
      }
    }
    if(number>0){
        count++;
        sum=sum+number;
        number=0;
      }
    
    cout<<"count="<<count<<endl;
    cout<<"sum="<<sum<<endl;
    
    return 0;
}
