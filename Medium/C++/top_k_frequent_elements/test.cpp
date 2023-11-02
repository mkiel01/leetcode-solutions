#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    vector<int> ans;
    int k = 2;
    int maxFreq;
    int mostFrequentElement = -1; // Variable to store the most frequent element
    unordered_map<int, int> count;


    for (auto nr: nums) {
        count[nr]++;
    }

    cout << "first map: " << endl;
    for (auto pair: count) {
        cout << pair.first << " = " << pair.second << endl;
    }
for (int i = 0; i < 3; i++) {
    for (auto pair: count) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            mostFrequentElement = pair.first;
        }
        else{
            cout << "nothing" << endl;
        }


    }

    cout << "end of for loop" << endl;
    cout << "choosen element: " << mostFrequentElement << endl;
    ans.push_back(mostFrequentElement);
    count.erase(mostFrequentElement);
    maxFreq = -1;
    cout << "changed map: " << endl;
    for (auto pair: count) {
        cout << pair.first << " = " << pair.second << endl;
    }


//    ans.push_back(mostFrequentElement);
//    count.erase(mostFrequentElement);
}

    for (int i = 0; i <= ans.size(); i++) {
        cout << "here: "<< ans[i] << endl;
    }

return maxFreq;
}


