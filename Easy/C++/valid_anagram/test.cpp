#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s = "a";
    string t = "ab";
    bool out = false;
    unordered_map<char, int> seen;
    unordered_map<char, int> seen2;
    for (auto letter: t) {
        seen[letter]++;
    }
    for (auto letter: s) {
        seen2[letter]++;
    }


    for (int letter: s) {
        if (seen[letter] && seen2[letter] >= 1) {
            out = true;
            cout << seen[letter] << " = " << seen2[letter] << endl;
            seen[letter]--;
            seen2[letter]--;
        }
        else{
            cout << "flase" << seen[letter] << " = " << seen2[letter] << endl;

            out = false;
            break;
        }
    }
    return out;
}