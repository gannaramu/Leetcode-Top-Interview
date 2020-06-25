// // #inlcude<algor
// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int a[26]={1};
//         std::fill_n(a,26,INT_MAX);
//         unordered_map<string, int> umap;
//         for(int i=0;i<s.size();i++){
//             // cout<<a[s[i]-97]<< " ";
//             if(a[s[i]-97]==INT_MAX){
//                 a[s[i]-97]=i;
//             }
//             else{
//                  a[s[i]-97]=INT_MAX-1;
//             }
//         }
//         int *minv; 
//         minv = std::min_element(a,a+26);
//         cout<<*minv<<endl;
//         for(auto x: a){cout<<x<<" ";};

//         if(*minv == INT_MAX-1 || *minv == INT_MAX ) return -1;
//         else return *minv;
//    }
// };

class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int charray[26] = {0};
        int n = s.size();
        
        for(int i=0; i<n; i++){
            charray[s[i] - 'a']++;
        }
        
        for(int i=0; i<n; i++){
            if(charray[s[i] - 'a'] == 1){
                return i;
            }
        }
        
        return -1;
        
    }
};
