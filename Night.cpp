#include<iostream>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    char past_char = 'a';
    int ans = 0;
    // string s;
    // cin >> s;
 
     for (int i = 0; i < s.length(); i++) {
 
         int diff = abs(past_char - s[i]);
 
         if(diff > 13)
            ans += (26 - diff);
        else
            ans += diff;
 
        past_char = s[i];
    }
 
    cout << ans;
    
    return 0;
}