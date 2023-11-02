#include <iostream>

using namespace std;


int main(){

    string s = "A man, a plan, a canal: Panama";
    string s2;
    string s3;

    for(char c : s) {
        if(isalnum(c)) {
            s2 += tolower(c);
        }
    }

    s3 = s2;

    int left = 0, right = s2.size()-1;
    while(left<right)
    {
       swap(s2[left++],s2[right--]);
    }
    cout << s2 << endl;

    cout << s3;

    return (s2==s3);

}



