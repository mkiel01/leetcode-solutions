#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<int> numbers = {2,3,4};
    int target = 6;
    vector<int> out;
    bool flag = false;

    int start = 0, end = start + 1;

    while (start <= numbers.size() - 2 && flag == false) {

        if ((numbers[start]) + numbers[end] == target) {
            cout << "conditon satified" << endl;
            cout << "first num " << numbers[start] << " secound num " << numbers[end]<< endl;
            out.push_back(numbers[start]);
            out.push_back(numbers[end]);
            flag = true;
        }
        if ((end == numbers.size() - 1)) {
            start += 1;
            end = start + 1;
        }
        else {
            cout << "shoudl be here";
            end++;

        }
    }
for (int i : out){
    cout << i << " ";
}

}



