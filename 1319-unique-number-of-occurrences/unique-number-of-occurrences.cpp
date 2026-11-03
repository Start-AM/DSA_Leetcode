class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> st;
        for (int num : arr) {
            freq[num]++;
        }
        for (auto it : freq) {
            if (st.find(it.second) != st.end()) {
                return false;
            }
            st.insert(it.second);
        }
        return true;
    }
};

