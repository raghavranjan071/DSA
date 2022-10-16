#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

//Q-Given a collection of numbers ,nums that might contain duplicate , return all possible permutations in any order(Avoid duplicates)

//Here basic idea is while removing duplicates avvooid duplicates

void helper(vector<int> &a,vector<vector<int>> &ans,int idx)
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx; i < a.size(); i++)
    {
        if(i != idx && a[i] == a[idx])
        {
            continue;
        }
        swap(a[i],a[idx]);
        helper(a,ans,idx+1);
    }
}
vector<vector<int>> permute(vector<int> nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v)
    {
        cin>>it;
    }

    vector<vector<int>> res=permute(v);
    for(auto v: res)
    {
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}