#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> factorial;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> factorial[i];
    }
    
    for(int fac:factorial){
       int sum =0;
       for(int i=1; i<=fac; i++){
          sum *= i;
       }
       cout << sum << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}