#include <iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    int d=c;
    
  if(d>=65 && d<=90){
    cout<<"Upper Case";
  }
  else if(d>=97 && d<=122){
    cout<<"Lower Case";
  }
  else{
      cout<<"Digit";
  }

    return 0;
}