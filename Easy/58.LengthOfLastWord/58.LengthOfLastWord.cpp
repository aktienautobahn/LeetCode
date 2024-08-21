class Solution {
public:
    int lengthOfLastWord(std::string s) {
        // iterate the string from the last char down and 
        // count from the first english char till the empty space.
        int i = s.size() - 1;
        bool ready = false;
        int charCounter = 0;
        while (i >= 0 && !ready) {
            if ((int)s[i] != 32) {
                charCounter++;
            } else if ( charCounter > 0 && (int)s[i] == 32) {
                ready = true;
            }
            i--;
        }
        return charCounter;
    }
};