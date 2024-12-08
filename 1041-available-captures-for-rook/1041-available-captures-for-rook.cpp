class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count = 0 ;
        int row , col ; 

        for(int i = 0 ; i < 8 ; i++){
            for(int j = 0 ; j < 8 ; j++){
                if(board[i][j] == 'R'){
                    row = i ;
                    col = j ; 
                }
            }
        }

        int i = row , j = col ;
        while(i >=0 && board[i][j] != 'B'){
            if(board[i][j] == 'p'){
                count++; 
                break ; 
            }
            i-- ;
        }

        i = row , j = col ; 
        while(i <= 7 && board[i][j] != 'B'){
            if(board[i][j] == 'p'){
                count++; 
                break ; 

            }
            i++; 
        } 

        i = row , j =  col ;
        while(j >= 0 && board[i][j] != 'B'){
            if(board[i][j] == 'p'){
                count++; 
                break ; 

            }
            j-- ;
        }

        i = row , j =  col ;
        while(j <= 7 && board[i][j] != 'B'){
            if(board[i][j] == 'p'){
                count++; 
                break ; 

            }
            j++ ;
        }
        return count ; 
    }
};