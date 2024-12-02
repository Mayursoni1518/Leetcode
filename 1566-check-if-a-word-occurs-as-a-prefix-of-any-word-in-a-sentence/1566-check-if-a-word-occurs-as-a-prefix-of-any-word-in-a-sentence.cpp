class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int idx = 1;
        int start = 0;
        for (int i = 0; i <= sentence.size(); i++){
            if (sentence[i] == ' ' ||i == sentence.size()){
                string prefix = sentence.substr(start, searchWord.size());
                if (searchWord == prefix)
                    return idx;
                start = 1 + i;
                idx++;
            }
        }
        return -1;
    }
};

// this is potd which is done by the method of copy paste on 2-12-2024