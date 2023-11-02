#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    unordered_map<string, vector<string>> mp;

        for (auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        vector<vector<string>> ans;
        for (auto x: mp){
            ans.push_back(x.second);
        }


    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}


int function() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<unordered_map<char, int>> hash_maps(strs.size());
    vector<vector<char>> out;
    vector<string> out2;
    bool assign = false;


    for (int i = 0; i < strs.size(); i++) {
        for (char letter: strs[i]) {
            hash_maps[i][letter]++;
        }
    }
    for (int i = 0; i < strs.size(); i++) {
        for (int j = i + 1; j < strs.size() - 1; j++) {
            for (char letter: strs[i]) {
                if (hash_maps[i][letter] && hash_maps[j][letter] >= 1) {
                    assign = true;
                }
                else{
                    assign = false;
                }
            }
        }
        if (assign) {
            out2.push_back(strs[i]);
        }
    }
//
//    int n = 3;
//    for (int i = 0; i < strs.size() - 1; i++) {
//        for (int j = i + 1; j < strs.size() - 1; j++) {
//            for (int z = 0; z <= 3; z++) {
//                if (hash_maps[i][z] && hash_maps[j][z] >= 1){
//                    hash_maps[i][z]--;
//                    hash_maps[j][z]--;
//                }
//                out[0].push_back(strs[i]);
//            }
//        }
//    }


    for (int i = 0; i < out.size(); i++) {
        for (int j = 0; j < out[i].size(); j++) {
            cout << out[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < out2.size(); i++) {
        cout << out2[i] << " ";


    }
}

