#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a , b;

    cin >> a >> b;

    int little = a;
    int big = b;

    int count = 0;


    while(true){


        if(little > big){
            cout << count ;
            return 0;
        }


        little *= 3;

        big *= 2;

        count ++;
    }

    
  

   


    return 0;
}