//write an algoritm which can find prime numbers from 0 to a number chosed by user
#include <iostream>
using namespace std;

int main() {
    int number, q = 2;
    bool prime;

    cout << "Please enter a number: ";
    cin >> number;
    cout <<" The prime numbers are:" << "\n";
    for (int n = 2; n <= number; ++n) {
        prime = true; 
        for (q = 2; q <= (n / 2) ; ++q) {
            if (n % q == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << n << " \n ";
        }
    }

    return 0;
}
