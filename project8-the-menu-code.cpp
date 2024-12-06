/*write a menu with 5 options
1)sum numbers 2) - numbers 3) * numbers 4) / numbers 5) exit */
#include <iostream>
using namespace std;
int main(){
    int num;
    float a , b , result;
    cout << "THE MENU\n1)summation numbers \n2)subtraction numbers\n"
    "3)multiplication numbers \n4)division numbers\n5)exit\n"
    "chose one of the above options and type the number of it: ";
    cin >> num;
    while (not((num == 1)||(num == 2)||(num == 3)||(num == 4)||(num == 5))){
        cout << "YOU ENTEREED A WRONG NUMBER! \nPlease try again: ";
        cin >> num;
    }
    while(num != 5){
        if( num == 1 ){
            cout << "now please enter two numbers: ";
            cin >> a >> b;
            result = a + b;
            cout << "The result is: " << result << endl;
        }
        if( num == 2 ){
            cout << "now please enter two numbers: ";
            cin >> a >> b;
            result = a - b;
            cout << "The result is: " << result << endl;
        }
        if( num == 3 ){
            cout << "now please enter two numbers: ";
            cin >> a >> b;
            result = a * b;
            cout << "The result is: " << result << endl;
        }
        if( num == 4 ){
            cout << "now please enter two numbers: ";
            cin >> a >> b;
            while(b==0){
            cout <<"THE SECOND NUMBER CANT BE ZERO!\nplease enter another number: ";
            cin >> b;
            }
            result = a / b;
            cout << "\nThe result is: " << result << endl;
        }
        cout << "\nTHE MENU\n1)summation numbers \n2)subtraction numbers\n"
        "3)multiplication numbers \n4)division numbers\n5)exit\n"
        "chose one of above options and type the number of it: ";
        cin >> num;
    }
    cout << "closing program \n Goodbye!";
    return 0;
}

