class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size() ;
        int step = 0 ;
        int fullcap = capacity ;
        for(int i = 0 ; i < n ; i++ ){
            if(capacity >= plants[i]){
                step++ ;
                capacity -= plants[i];
            }
            else{
                capacity = fullcap - plants[i]; 
                step = step + ( 2 * i)  + 1 ;  
            }
        }
        return step ;
    }
};