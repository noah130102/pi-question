#include <iostream>
#include <string>
#include <map>
using namespace std;

void pi(string str ){
    int i = 0;
    if (i==str.length())
    {
        return;
    }
    if (str[i]=='p' && str[i+1] == 'i'){
        cout<<"3.14";
        i=i+2;
        
    }else{
        cout<<str[i];
        i++;
    }
    string x=str.substr(i);
    pi(x);
    
}

int main (){
    string str = "pippxxppiixipi";
    pi(str);

    return 0;
}