#include <iostream>

using namespace std;



bool test() {

    bool result = true;

    int x = 1000021;

    string y;
    y = to_string(x);

    int j;
    int jj;
    j = y.length() - 1;
    jj = y.length() - 1;

    for (int i = 0; i < y.length(); i++) {

        if (y[i] == y[j]) {
            j--;
        } else {
            result = false;
        }
    }

    cout << "first " << y[0] << endl;
    cout << "last " <<  y[jj] << endl;
    return result;


}

int main(){
    cout << test();

}