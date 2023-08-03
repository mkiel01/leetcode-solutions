#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> digits = {9,8,7,6,5,4,3,2,1,0};
string number;
vector<int> final_vector;

int main() {
    for (int i = 0; i < digits.size(); i++) {
        number += to_string(digits[i]);
    }
    cout << "here" << endl;
    cout << number << endl;
    int final_number = stoi(number);
    final_number += 1;
    cout << final_number << endl;
    number = to_string(final_number);

    for (int j = 0; j < number.length(); j++) {
        final_vector.push_back(number[j] - '0');
    }

    for (size_t i = 0; i < final_vector.size(); i++) {
        std::cout << final_vector[i] << " ";
    }

    return 0;
}
