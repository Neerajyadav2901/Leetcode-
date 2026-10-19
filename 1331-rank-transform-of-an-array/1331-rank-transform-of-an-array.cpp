class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> sorted = arr;
       int r = 1;
      sort(sorted.begin() , sorted.end());
      unordered_map<int,int> rank;
      for(int i = 0; i < sorted.size(); i++){
        if(rank.find(sorted[i]) == rank.end()){
            rank[sorted[i]] = r;
            r++;
        }
      } 
      for(int i = 0; i < arr.size(); i++){
        arr[i] = rank[arr[i]];
      } 
      return arr; 
    }
};