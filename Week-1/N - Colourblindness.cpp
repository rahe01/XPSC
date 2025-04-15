#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        int x;
        cin >> x;

        vector<vector<char>> arr(2, vector<char>(x)); 

        for (int j = 0; j < 2; j++)  
        {
            for (int i = 0; i < x; i++) 
            {
                char s;
                cin >> s;

                if (s == 'G')
                {
                    s = 'B';
                }

                arr[j][i] = s;
            }
        }

     
   
        bool isTrue = true;
            for (int i = 0; i < x; i++)  
            {

                if(arr[0][i] != arr[1][i]){
                    isTrue = false;
                    break;
                }
                

               
            }

            if(isTrue){
                cout << "YES" << endl;
            }

            else{
                cout << "NO" << endl;
            }
            
        
    }
    return 0;
}
