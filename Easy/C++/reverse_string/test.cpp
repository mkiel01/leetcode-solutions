#include <iostream>
#include <vector>

using namespace std;

vector<char> s = {'h', 'e', 'l', 'l', 'o'};
vector<char> new_s;


int main() {
    cout << s.size() << endl;
    cout << s[0] << endl;


    for (int i = s.size() - 1 ; i <= s.size(); i--){


        cout << s[i] << " ";
        new_s.push_back(s[i]);

    }
    s.clear();

    s = new_s;

    for (int i = 0; i <= s.size(); i++){


        cout << s[i] << " ";

    }

    return 0;
}
