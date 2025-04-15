#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;
        
        set<int> st;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;
            arr.push_back(a);
            st.insert(a);
            
        }

       
       

        int left = 0, right = n-1;
        int flag;

        while(1){
            
            int min = *st.begin();
            int max = *st.rbegin();

            flag = 0;


            if(min == arr[left] || max == arr[left] ){
                st.erase(arr[left]);
                left++;
                flag = 1;
            }

            if(min == arr[right] || max == arr[right] ){
                st.erase(arr[right]);
                right--;
                flag = 1;
            }

            if(flag == 0 || left> right){
                break;
            }




        }

        if(left > right){
            cout << "-1" << endl;
        }
        else{
            cout << left +1 << " " << right+1 << endl;
        }

     

   
       
    }

    return 0;
}