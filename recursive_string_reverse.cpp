#include<iostream>
using namespace std;

void reverse_string_recursive(string& str, int s, int e) {
    //base case
    if(s > e) return;

    //solve one case
    swap(str[s],str[e]);

    //recusion solves rest
    reverse_string_recursive(str, ++s, --e);
}

int main() {
    string str = "VISHNU";
    reverse_string_recursive(str, 0, str.size()-1);
    cout << str << endl;
    return 0;
}