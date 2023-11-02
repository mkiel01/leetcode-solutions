#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans;
    vector<int> new_nums = {1, 2, 3, 4};
//    for(int i = 0; i < new_nums.size(); i++){
//        cout << new_nums[i] << " ";
//        cout << endl;
//    }
//     new_nums.erase(new_nums.begin() + 1);
//        for(int i = 0; i < new_nums.size(); i++){
//            cout << new_nums[i] << " ";
//            cout << endl;
//        }

   int val = nums[0];
   for (int i = 0; i < nums.size(); i++){
       new_nums.erase(new_nums.begin() + (i + 1));
       for(int i = 0; i < new_nums.size(); i++){
           cout << new_nums[i] << " ";
           cout << endl;
       }
       for(int j = 0; j < new_nums.size(); j++){
           cout << "val = " << val << " * "<< new_nums[j]<< endl;
           val *= new_nums[j];
       }
       ans.push_back(val);
       cout << "number saved: " << val << endl;
       val = nums[0];
     nums.erase(nums.begin() + i);
   }
   for (int i = 0; i <= ans.size(); i++){
       cout << ans[i] << endl;
   }
   for (int i = 0; i <= ans.size(); i++){
       cout << ans[i] << endl;
   }

   };


