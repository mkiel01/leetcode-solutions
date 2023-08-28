#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    int num = 123;
    int i = 0;

    while (num != 0) {
        if (num % 2 == 0) {
            num = num / 2;
            i++;
        } else {
            num -= 1;
            i++;
        }
    }

            cout << i;

    return 0;
}
