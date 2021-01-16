#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include "compareString.h"

using namespace std;

int main() {
    int are_string_identical(0);
    int tries(0);
    int max_tries(5);
    string chosen_word;
    string hint;
    string word_guessed;

    cout << "Welcome to the Mystery Word game!" << endl;
    cout << "[Player 1] Choose a word (case sensitive): " << endl;
    cin >> chosen_word;
    hint = chosen_word;

    while(are_string_identical == 0 and tries < max_tries) {
        random_shuffle(hint.begin(), hint.end());
        cout << "[Player 2] What is this word? (case sensitive) " << hint << endl;
        cin >> word_guessed;
        are_string_identical = compareString(chosen_word, word_guessed);
        if(are_string_identical==0){
            tries ++;
            if(tries<max_tries){
                cout << "Try again! You have " << max_tries - tries << " tries remaining. \n"<< endl;
            }
        }
    }

    if(are_string_identical){
        cout << "That was the right word! Player 2 wins!" << endl;
    }
    else{
        cout << "Out of tries. Player 1 wins!" << endl;
    }

    return 0;
}
