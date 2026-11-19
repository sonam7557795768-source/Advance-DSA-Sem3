// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    // pair<string,int>p;
    // p={"Sonam",1172};
    // cout<<p.first<<","<<p.second;

//     vector<pair<string,int>>vp;
//     vp.push_back({"Sona",123});
//     vp.push_back({"Mahi",133});
//     vp.push_back({"Mona",423});
//     vp.push_back({"priya",563});
//     for(int i=0;i<vp.size();i++){
//         cout<<vp[i].first<<","<<vp[i].second;
//         cout<<endl;
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple<string,int,float>T;
    T={"Sonam kumari", 1172, 96.2};
    cout<<get<0>(T)<<",";
    cout<<get<1>(T)<<",";
    cout<<get<2>(T)<<",";
    

}