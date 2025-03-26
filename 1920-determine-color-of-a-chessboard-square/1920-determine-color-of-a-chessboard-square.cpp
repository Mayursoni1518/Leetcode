class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char col = coordinates[0];
        char row = coordinates[1];

        if ((col == 'a' || col == 'c' || col == 'e' || col == 'g') &&
            (row == '2' || row == '4' || row == '6' || row == '8')) {
            return true;
        } 
        else if ((col == 'a' || col == 'c' || col == 'e' || col == 'g') &&
                 (row == '1' || row == '3' || row == '5' || row == '7')) {
            return false;
        } 
        else if ((col == 'b' || col == 'd' || col == 'f' || col == 'h') &&
                 (row == '1' || row == '3' || row == '5' || row == '7')) {
            return true;
        } 
        else {
            return false;
        }
    }
};
