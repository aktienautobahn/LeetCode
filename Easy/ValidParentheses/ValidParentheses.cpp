#include <iostream>
#include <vector>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        // base case: if the number of element is odd -> false (if empty)
        int lenStr = s.length();
        if (lenStr == 0 || lenStr % 2 != 0) return false;

        // on every opening parentheses there should be a closed one of the same type 
        // stack for opening parentheses
        std::stack<char> positions;

        // iterate over string
        for (int i = 0; i < lenStr; i++) {
            // if opening parentheses , push to stack, if closing pop from stack and compare 
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') { // case for opening
                positions.push(s[i]);
            } else { // case for closing
                if (positions.empty()) return false; // safety check
                char openingP = positions.top(); // pick the top element

                switch(openingP) {  // looking for corresponding parentheses
                case '(':
                    if (openingP + 1 != s[i] ) return false;
                    break;
                case '[':
                    if (openingP + 2 != s[i] ) return false;
                    break;
                case '{':
                    if (openingP + 2 != s[i] ) return false;
                    break;
                }
                positions.pop(); // pop the top element
            }

        }
        
        // case for not satisfied condition (every opening parentheses has it's closing pair)
        if (positions.empty()) return true;
        else return false;
    }
};


int main() {
    std::vector<std::string> strings = {"()", "()[]{}", "(]", "{[]}", "(("};
    Solution obj;
    for (const std::string &s : strings) {
        bool result = obj.isValid(s);
        std::cout << "The string \"" << s << "\" is "
                  << (result ? "valid" : "invalid") << std::endl;
    }

    return 0;
}