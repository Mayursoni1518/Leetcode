class Solution {
public:
    int findComplement(int num) {
        int numBits = (int)(log2(num)) + 1 ; // generate number of bit in (like for 5 = 101 that is 3rd bit)

        for(int i = 0 ; i < numBits ; i++){
            num = num ^ (1 << i) ;
        }
        return num ;
    }
};
// 1st approach story -> 
// jaise number 101 hai 5 ka binary to hame iska complement generate karne hame 3 number generate karne padege that is jaise 3 bit hai 101 ke to har ak single bit ko flip karna hai hame to sabse phle oth bit ko flip karenge then 1st bit and then 2nd bit ko flip karenge to sabse phle 1st bit ko 101 me -> 1 ko 0 banana hai so take it 001 then iska result -> 101 ^ 001 = result. 
// now ab 1st bit flip ho jyegi 2nd bit flip ke liye we have to take 010 (1<<i) i kyo mtlb i = 0 (phli bit) i = 1 dusri bit now result ^ 010 = result2 now 3rd bit flip -> result2 ^ 100 = ANS .


// 2nd approach story -> 
// instead of doing and getting 001 -> 010 -> 100 by the (1 << i ). can't be diretly generate 111 ? yes we can how -> 
// 1 << num_bit is always equal to 2 to the power num_bit 2 ^ num_bit that is 8 , 16 = 1000 , 10000 now want to make 111 so (1 << num_bit) - 1 = 1000 - 1 = 0111  --> 111 
// so just do return  num ^ mask to flip all the bits by lines 
// code -> 
// int numBits = (int)(log2(num)) + 1 ; 
// int mask  = (1 << numBits) - 1 ; // this will show runtime error due to interger limit use this -> 
// unsigned int mask = (1U << numBits) - 1 ; // 1U means 1 for unsigned int 
// return num ^ mask ;

