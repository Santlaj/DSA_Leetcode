#include <bits/stdc++.h>
using namespace std;

// --- Class Starts Here -----
class Solution {
public:
    int minAddToMakeValid(string s) {
        int ob = 0;
        int cb = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                ob++;
            }
            else if(s[i] == ')' && ob>0){
                ob--;
            }else{
                cb++;
            }
        }
        return ob+cb;
    }
};
// ----- class Ends Here ---

int main() {
    string s;
    cin >> s;

    Solution obj;
    cout << obj.minAddToMakeValid(s);
    return 0;
}
