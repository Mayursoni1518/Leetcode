class Solution {
public:
    bool sum(int number ){
        int sum =0 ;
        while(number != 0 ){
            int temp = number % 10 ;
            sum = sum + temp ;
            number /= 10 ;
        }
        return sum % 2 == 0 ? true : false ;
    }
    int countEven(int num) {
        int count = 0;
        for(int i = 1 ; i <= num ; i++ ){
            if(sum(i)){
                count++ ;
            }
        }
        return count ; 
    }
};