/*write a progeram with def which can calcules the Least Common Multiple*/
//version 1 :
#include <iostream>
using namespace std;
int B_M_M(int a , int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int K_M_M(int a , int b){
    return (a*b)/B_M_M(a,b);
}
int main() {
    int num1, num2, result;
    cout << "please enter two numbers: ";
    cin >> num1 >> num2;
    result = B_M_M(num1,num2);
    cout << "The bmm is: " << result << endl;
    result = K_M_M(num1,num2);
    cout << "The kmm is: " << result << endl;
    return 0;
}

//version 2 :
#include<iostream>
using namespace std;

int K_M_M(int, int); 

int main(){
    int a, b, result;
    cout << "please enter two numbers: ";
    cin >> a >> b;
    result = K_M_M(a,b);
    cout << "The kmm is: " << result;
}

int K_M_M (int a, int b) {
    int i = 1;
    while(true){
        if((a * i) % b == 0){ 
            return a * i;
        }
        i++;   
    }
}