#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<int> passwords;
    int a,b,c,d,e,real_password=1999;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    
    passwords.push_back(a);
    passwords.push_back(b);
    passwords.push_back(c);
    passwords.push_back(d);
    passwords.push_back(e);
    
    
    for(int password:passwords){
       if(password == real_password){
          cout << "Correct" << endl;
          break;
       }else {
          cout << "wrong" << endl;
       }
    }
    return 0;
}