#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {


    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    unordered_map<int, bool> map;

    for(int i = 0; i<nums.size(); i++){
        map[nums[i]] = true;
    }
    for (auto pair : map){
        cout << pair.first << " " << pair.second << endl;
    }

    cout << "next operation" << endl;

    for(int i=0; i<nums.size(); i++){
        if(map.count(nums[i]-1) > 0){
            cout << map.count(nums[i]-1) << endl;
            map[nums[i]] = false;
        }
        cout << "else " <<  map.count(nums[i]-1) << endl;

    }

    for (auto pair : map){
        cout << pair.first << " " << pair.second << endl;
    }

    int maxlen = 0;
    for(int i=0; i<nums.size(); i++){
        if(map[nums[i]] == true){
            int j=0; int count=0;
            while(map.count(nums[i]+j) > 0){
                j++;
                count++;
            }
            if(count>maxlen){
                maxlen = count;
            }
        }
    }
    return maxlen;

}


