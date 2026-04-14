#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int attempts = 0;
    srand(time(0));
    cout << "Game guess number (max number 100)" << endl;
    int num = rand() % 100 + 1;
    while (true){
    int user_number;
    
    cout << "Enter number" <<endl ;
    cin >> user_number;
    bool is_guess = (num == user_number);
    if (is_guess){
        cout << "You win in "<< attempts + 1 << endl;
        cout << "Press enter to quit";
        cin.ignore(1000,'\n');
        cin.get();
        break;
    }else if (user_number > num){
        cout << "Your numer is higher than the riddle"<<endl;
    }else if (user_number < num){
        cout << "your number is lower than the riddle " << endl;
    }
    attempts++;
    }
    return 0;
}
