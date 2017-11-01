#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s){
    // Complete this function
    stack<char> charStack;
    map<char, char> brackets;
    char top;
    
    brackets['('] = ')';
    brackets['{'] = '}';
    brackets['['] = ']';
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '[')
            charStack.push(s[i]);
        else{
            if(charStack.empty())
                return "NO";
            else{
                top = charStack.top();
                if(brackets[top] == s[i]){
                    charStack.pop();
                    continue;
                }
                else
                    return "NO";
            }
        }
    }
    if(charStack.empty())
        return "YES";
    return "NO";
}
int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    
    return 0;
}
