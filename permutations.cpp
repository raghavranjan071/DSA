#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
//Q-Print all permutations with duplicates
vector<vector<int>> ans;
void permute(vector<int> &v,int idx)
{
    if(idx == v.size())
    {
        ans.push_back(v);
        return;
    }

    for(int i=idx;i<v.size();i++)
    {
        swap(v[i],v[idx]);
        permute(v,idx+1);
        swap(v[i],v[idx]);
    }

    return;
}

//Another method using inbuilt function
void permute2(vector<int> &a,int idx)
{
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    } while (next_permutation(a.begin(),a.end()));  
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

    // permute(v,0);
    permute2(v,0);
    for(auto v: ans)
    {
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}