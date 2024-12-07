#include <iostream>
using namespace std;
int num_reverse(int a){
    int rev = 0;
    while (a != 0){
        int x = a % 10;
        a = a / 10;
        rev = (rev*10) + x;
    }
    return rev;
}
int main(){
    int a, rev_a;
    cout << "please enter a number: ";
    cin >> a;
    rev_a = num_reverse(a);
    cout << "The reverse of your number is: " << rev_a;
    return 0;
}