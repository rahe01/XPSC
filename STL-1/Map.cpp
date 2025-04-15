#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    mp[10] = 30;
    mp[9] = 98;
    mp[109] = 100;
    mp[29] = 98;
    mp[130] = 100;

    // for(auto [key,value] : mp){
    //     cout << key << "-> " << value << endl;
    // }

    // auto it = mp.find(1110);

    // // cout << it->second;

    // if(it == mp.end()){

    //     cout << "Key not found";
    // }

    // cout << mp[10];

    // mp.erase(9);

    // for (auto it : mp)
    // {

    //     int key = it.first, value = it.second;

    //     cout << key << "-> " << value << endl;
    // }

    // auto it = mp.find(9);

    // if (it != mp.end())
    // {
    //     mp.erase(it);
    // }

    
    // for (auto it : mp)
    // {

    //     int key = it.first, value = it.second;

    //     cout << key << "-> " << value << endl;
    // }



    // auto it  = mp.begin();



    auto it = mp.upper_bound(9);

    cout << it->first << " " << it->second;

    for (auto it : mp)
    {

        int key = it.first, value = it.second;

        cout << key << "-> " << value << endl;
    }


    return 0;
}