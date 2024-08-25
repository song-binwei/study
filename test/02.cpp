#include <bits/stdc++.h>

using namespace std;

int 

int main() {

    int n;
    cin >> n;
    unordered_map<int,int> map;

    
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
        map[nums[i]] = i;
    }
    
    // 两个都不删
    int res = abs(map[n]-map[1]);
    
    // 删除一个小的
    if(map[1] > map[n] && map[1] < map[2] || map[1] < map[n] && map[1] > map[2])
    {
        res = max(res, abs(map[n]-map[2])-1);
    }else{
        res = max(res, map[n]-map[2]);
    }
    // 删除一个大的
    if(map[n] > map[n-1] && map[n] < map[1] || map[n] < map[n-1] && map[n] > map[1])
    {
        res = max(res, abs(map[n]-map[2])-1);
    }else{
        res = max(res, map[n]-map[2]);
    }

    // 删除一个大的
    top = maxn.top();
    maxn.pop();
    nextnum = maxn.top();
    if(nextnum >= top)
    {
        res = max(res, abs((maxn.top()-1)-minn.top()));
    }else{
        res = max(res, abs(maxn.top()-minn.top()));
    }
    

    // for (auto x : nums) {
    //     cout << x << endl;
    // }



    return 0;


}