//write an algoritm which can find prime numbers from 0 to a number chosed by user
//first(I think this way has some bugs):
/*#include <iostream>
using namespace std;
int main() {
    int number , q = 2, a = 1 ;
    float jazr_number;
    bool prime = true;
    cout << "please enter a number: ";
    cin >> number;
    while(q<=number){
        jazr_number = (0.5)*(a+(number/a));
        while((q<=number)&&(prime==true)){
            if(number % q == 0){
                prime = false;
            }
            q++;
        }
        if(prime == true){
            cout << "number is: " << number;
        }
        q++;
    }
    return 0;
    }*/

//second way:
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
