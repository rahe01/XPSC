#include <bits/stdc++.h>

using namespace std;

int main(){
    

    int a , b, t;

    cin >> a >> b >> t;

    int biscuit = 0;

    int time = a;
    while (time <= t)
    {
        
            time+=a;
            biscuit+=b;
            
       

        
    }

    cout << biscuit;
    


    return 0;
}