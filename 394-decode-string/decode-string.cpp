class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
stack<string> st;
string curr = "";
int num = 0;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        }
        else if (c == '[') {
            nums.push(num);
            st.push(curr);
            num = 0;
            curr = "";
        }
        else if (c == ']') {
            int k = nums.top();
            nums.pop();

            string temp = st.top();
            st.pop();

            while (k--) temp += curr;
            curr = temp;
        }
        else {
            curr += c;
        }
    }

    return curr;
        
    }
};