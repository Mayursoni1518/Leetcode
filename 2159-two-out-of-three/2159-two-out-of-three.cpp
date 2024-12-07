class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
   vector<int>& nums3) {
    set<int>set1(nums1.begin() , nums1.end()) ; 
    set<int>set2(nums2.begin() , nums2.end()) ; 
    set<int>set3(nums3.begin() , nums3.end()) ; 

    unordered_map<int,int>mapp ;

    for(auto num : set1){
        mapp[num]++ ;
    }
     for(auto num : set2){
        mapp[num]++ ;
    }
     for(auto num : set3){
        mapp[num]++ ;
    }
    vector<int>result ; 
    for(auto ch : mapp ){
        if(ch.second >= 2) {
            result.push_back(ch.first) ;
        }
    }
    return result ;

  }
};