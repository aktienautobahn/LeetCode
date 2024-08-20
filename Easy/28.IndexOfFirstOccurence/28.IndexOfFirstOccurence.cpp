#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {

        int haystackLen = haystack.size();
        int needleLen = needle.size();
        if (haystackLen < needleLen) { // edge case, haystack < needle
            return -1;
        }
        int i = 0; // index in haystack
        int j = 0; // index in needle
        int counter = 0;
        while(i < haystackLen) {
            while(i < haystackLen && j < needleLen && haystack[i] == needle[j]) {
                counter++;
                i++;
                j++;
            }
            if (counter == needleLen) { // if 100% similar
                return i - needleLen;
            }
            if (j != 0) { // case for partly similar but not complete
                i = i - j;
                j = 0;
            }
            i++; // increment
            counter = 0; // reset counter
        }

        return -1; // if no occurence


        // THOUTH THE ABOVE CODE WORKS FINE, IT'S IS NOT OPTIMIZED IN TERMS OF TIME COMPLEXITY.
        // easy and clean solution:
        // return haystack.find(needle); // this utilized optimized algorithms, but has worse space complexity
    }
};