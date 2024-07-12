#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(string in_str, int index, string out_str, vector<string> &sub_seq) {
    int out_str_len = in_str.length();

    //base case
    if (index == out_str_len){
        //cout << out_str << "; ";
        sub_seq.push_back(out_str);
        return;
    }

    // Solve one case
    char ch = in_str[index];

    // Solved by recusrion
    //include case
    printSubsequence(in_str, index+1, out_str + ch, sub_seq);

    //exclude case
    printSubsequence(in_str, index+1, out_str, sub_seq);
}

int main() {
    string in_str = "abc";
    string out_str = "";
    int index = 0;
    vector<string> sub_seq;

    printSubsequence(in_str, index, out_str, sub_seq);
    
    cout << "Sub Sequence(s) Generated for input String: " << in_str << endl;;
    for(auto e : sub_seq) {
        cout << e << "; ";
    } 

    cout << endl << "Number of Sub Subsequence(s) Generated: " << sub_seq.size() << endl;

    return 0;
}