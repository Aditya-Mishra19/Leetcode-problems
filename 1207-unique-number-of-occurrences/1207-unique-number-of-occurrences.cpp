class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap;
        for(int i=0; i<arr.size(); i++)
            umap[arr[i]]++;
        set<int> s;
        for(auto it: umap)
            s.insert(it.second);
        
        if(umap.size() == s.size()) return true;
        return false;
        
    }
};