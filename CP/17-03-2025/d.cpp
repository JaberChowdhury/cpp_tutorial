#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a_dividers;
    vector<int> b_dividers;
    int a , b ;
    cin >> a >> b ;
    
    int remaining_a=a;
    int remaining_b=b;
    
    for(int i=1; i<a; i++){
      if(a%i == 0){
         a_dividers.push_back(i);
      }else if(a/i==0) {
        break;
      }
    }
    
    for(int i=1; i<b; i++){
      if(b%i == 0){
         b_dividers.push_back(i);
      }else if(b/i==0) {
        break;
      }
    }
    
    for(int i=0; i< a_dividers.size(); i++){
      cout << "a " << a_dividers[i] << endl;
    }
    for(int i=0; i< b_dividers.size(); i++){
      cout << "b " << b_dividers[i] << endl;
    }
    
    int gcd;
    if(a_dividers.size() > b_dividers.size()){
       gcd = b_dividers.end();
    }else {
       gcd = a_dividers.end();
    }
    
    cout << gcd << endl;
    
    return 0;
}