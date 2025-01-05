#include <iostream>
using namespace std;

int score_list[200];
int cnt = 0;
int passed_avg = 0;

void show_list() {
    cout << "\nTHE MENU: \n1) Adding score \n2) Show all scores \n3) Highest score\n"
         << "4) Lowest score \n5) Average of scores \n6) Passed students \n7) Sort scores \n"
         << "8) Find a specific score \n9) Exit \nPlease enter the number of the option you want to run: ";
}

// Option 1: Adding score to the list
void add_score() {
    int number;
    cout << "You can add up to 200 scores.\n"
    "How many scores do you want to add?\n";
    cin >> number;
    if (number + cnt <= 200) {
        cout << "Okay! Now please enter the scores...(of 100)" << endl;
        for (int i = cnt; i < cnt + number; i++) {
            cout << "Enter score " << (i - cnt + 1) << " : ";
            cin >> score_list[i];
        }
        cnt += number;
    }
    else {
        cout << "You can only add " << (200 - cnt) << " more scores." << endl;
    }
}

// Option 2: Showing all scores in the list
void show_all_scores() {
    if (cnt == 0) {
        cout << "\nTHERE'S NO SCORE TO SHOW!\n";
    } else {
        cout << "\nThe list of scores:\n";
        for (int j = 0; j < cnt; j++) {
            cout << score_list[j] << " - ";
        }
        cout << endl;
    }
}

// Option 3: Showing the highest score in the list
int max_score(int ar[], int size) {
    if (size == 1) {
        return ar[0];
    }
    int max = max_score(ar, size - 1);  // Recursively find the max
    return (ar[size - 1] > max) ? ar[size - 1] : max;
}
/*normal finding:
int max_score(){
    int max_score = score_list[0];
    for (int i = 0 ; i <= cnt ; i++){
        if(score_list[i+1] > score_list[i]){
            max_score = score_list[i+1];
        }
    }
    return max_score;
}*/


// Option 4: Showing the lowest score in the list
int min_score(int ar[], int size) {
    if (size == 1) {
        return ar[0];
    }
    int min = min_score(ar, size - 1);  // Recursively find the min as you wish :)
    return (ar[size - 1] < min) ? ar[size - 1] : min;
}
/*normal finding:
int min_score(){
    int min_score = score_list[0];
    for (int i = 0 ; i <= cnt ; i++){
        if(score_list[i+1] < score_list[i]){
            min_score = score_list[i+1];
        }
    }
    return min_score;
}*/


// Option 5: Showing the average of scores
double scores_average() {
    double sum = 0;
    for (int i = 0; i < cnt; i++) {
        sum += score_list[i];
    }
    return (cnt > 0) ? sum / cnt : 0;  //I wanted to avoid division by zero.
}

// Option 6: Showing the number of passed students
int passed_students() {
    int passed_stu = 0;
    int passed_cnt = 0;
    int passed_avg = 0;  // Local calculation of passed average
    for (int i = 0; i < cnt; i++) {
        if (score_list[i] >= 50) {
            passed_stu++;
            passed_cnt++;
            passed_avg += score_list[i];
        }
    }
    if (passed_cnt > 0) {
        passed_avg /= passed_cnt;
    }
    cout << passed_stu << " students passed with an average score of " << passed_avg << endl;
    return passed_stu;
}

// Option 7: Sorting scores
// Sorting the array using a simple sort algoritm
void sort_scores() {
    int temp = 0;
    if(cnt == 0){
        cout << "THERE IS NO SCORE IN THE LIST!";
    }
    else{
        for (int i = 0; i < cnt - 1; i++) {
            for (int j = 0; j < cnt - i - 1; j++) {
                if (score_list[j] > score_list[j + 1]) {
                    temp = score_list[j];
                    score_list[j] = score_list[j+1];
                    score_list[j+1] = temp;
                }
            }
        }
    cout << "Scores have been sorted. If you want to see them, use option 2." << endl;
    }
}

// Option 8: Find a specific score
//this way it shows all the indexes if we have more of that specific score
void find_score() {
    int target;
    bool found = false;
    cout << "Please enter the score you want to find: ";
    cin >> target;
    cout << "\nThe score " << target << " is found at the following positions: ";
    for (int i = 0; i < cnt; i++) {
        if (score_list[i] == target) {
            cout << i << " "; 
            found = true;
        }
    }
    if (!found) {
        cout << "\nScore " << target << " is not in the list." << endl;
    }
}


int main() {
    int user_choice;
    while (true) {
        show_list();
        cin >> user_choice;
        switch (user_choice) {
        case 1:
            add_score();
            break;
        case 2:
            show_all_scores();
            break;
        case 3:
            if (cnt == 0) {
                cout << "No scores have been entered yet.\n";
            }
            else {
                cout << "The max score is: " << max_score(score_list, cnt) << endl;
            }
            break;
        case 4:
            if (cnt == 0) {
                cout << "No scores have been entered yet.\n";
            } 
            else {
            cout << "The min score is: " << min_score(score_list, cnt) << endl;
            }
            break;
        case 5:
            cout << "The average of scores is: " << scores_average() << endl;
            break;
        case 6:
            passed_students();
            break;
        case 7:
            sort_scores();
            break;
        case 8:
            if (cnt == 0) {
                cout << "No scores have been entered yet.\n";
            } 
            else{
                find_score();
            }
            break;
        case 9:
            cout << "Closing the program... \nGOODBYE!" << endl;
            return 0;
        default:
            cout << "You entered a wrong number! Please try again...\n";
            break;
        }
    }
    return 0;
}
