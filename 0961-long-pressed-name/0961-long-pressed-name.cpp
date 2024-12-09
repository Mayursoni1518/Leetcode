class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int p1 = 0; // Pointer for `name`
        int p2 = 0; // Pointer for `typed`

        while (p2 < typed.size()) {
            if (p1 < name.size() && name[p1] == typed[p2]) {
                // Characters match; move both pointers
                p1++;
                p2++;
            } else if (p2 > 0 && typed[p2] == typed[p2 - 1]) {
                // Allow long-pressed character in `typed`
                p2++;
            } else {
                // Mismatch that cannot be resolved
                return false;
            }
        }

        // Ensure all characters in `name` are matched
        return p1 == name.size();
    }
};
