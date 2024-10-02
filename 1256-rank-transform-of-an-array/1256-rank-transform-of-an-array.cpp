class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int>help=arr;
        sort(help.begin(),help.end());
        help.erase(unique(help.begin(),help.end()),help.end());
        for(int i=0;i<help.size();i++){
            m[help[i]]=i+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};