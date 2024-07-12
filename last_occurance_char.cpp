#include <iostream>
using namespace std;

void last_occurance_char_ltor(string str, char ch, int i, int& ans) {
    //base case
    if(i >= (int)str.length()) return;

    // solve one case
    if(str[i] == ch) ans = i;

    // recursion solves rest
    last_occurance_char_ltor(str, ch, i+1, ans);
}

int main() {
    string str = "abcddefdg";
    char ch = 'd';
    int ans = -1;
    last_occurance_char_ltor(str, ch, 0, ans);
    cout << ans << endl;
    return 0;
}