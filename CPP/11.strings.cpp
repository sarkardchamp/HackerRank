#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string str1, str2;
    cin>>str1>>str2;
    cout<<(str1.size())<<" "<<(str2.size())<<endl;
    cout<<str1+str2<<endl;
    char c;
    c = str1[0];
    str1[0] = str2[0];
    str2[0] = c;
    cout<<str1<<" "<<str2;
  
    return 0;
}
