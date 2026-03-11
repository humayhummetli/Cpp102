//input;hello world
//output;Hello World

#include <iostream>

using namespace std;

int main() 
{
    string text;
    getline(cin,text);
    text[0] =toupper(text[0]);
    for(int i=0;i<text.length();i++){
      if(text[i]==' ') text[i+1] =toupper(text[i+1]);
      
    }
    cout << text << std::endl;

    
    return 0;
}
