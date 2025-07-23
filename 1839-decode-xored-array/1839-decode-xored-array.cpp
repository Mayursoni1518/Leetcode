class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
       vector<int> arr(encoded.size() + 1); // Initialize arr with size n
    arr[0] = first; // Set the first element of arr

    // Reconstruct the original array arr
    for (int i = 0; i < encoded.size(); ++i) {
        arr[i + 1] = arr[i] ^ encoded[i]; // XOR operation to get the next element
    }

    return arr;
       
    }
};