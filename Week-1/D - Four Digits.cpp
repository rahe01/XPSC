#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    string str = to_string(a);

  if(str.size() == 1){
    cout << "000" << str << endl;

  }
    else if(str.size() == 2){
        cout << "00" << str << endl;
    }
    else if(str.size() == 3){
        cout << "0" << str << endl;
    }
    else{
        cout << str << endl;
    }
   
    
   


    return 0;
}