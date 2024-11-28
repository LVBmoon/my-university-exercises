#include <iostream>
using namespace std;
int main() {
    int age,ticket_ptice;
    string membership;
    cout << "How old are you?(example:18)";
    cin >> age;
    cout << "Are you a member of our clube?(answer: yes/no)";
    cin >> membership;
    if(age<12 && age>0){
       ticket_ptice=10; 
    }
    else if(age>=12 && age<18){
       if ((membership=="yes")){
        ticket_ptice = 12;}
       else{
        ticket_ptice = 15;
       } 
    }
    else if(age<60 && age>=18){
        if ((membership=="yes")){
        ticket_ptice = 20;}
       else{
        ticket_ptice = 25;
       }
    }
    else if(age>=60){
        ticket_ptice = 10;
    }
    else{
        cout <<"Age is not true!";
    }
    cout << "You have to pay " << ticket_ptice <<" Toman";
    return 0;
}