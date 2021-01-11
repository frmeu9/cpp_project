#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include "compareString.h"

using namespace std;

int main() {
    int are_string_identical(0);
    string chosen_word;
    string hint;
    string word_guessed;

    cout << "Welcome to the Mystery Word game!" << endl;
    cout << "[Player 1] Choose a word (case sensitive): " << endl;
    cin >> chosen_word;
    hint = chosen_word;

    while(are_string_identical == 0){
        random_shuffle(hint.begin(), hint.end());
        cout << "[Player 2] What is this word? (case sensitive) " << hint << endl;
        cin >> word_guessed;
        are_string_identical = compareString(chosen_word, word_guessed);
        if(are_string_identical==0){
            cout << "Try again!" << endl;
        }
    }

    cout << "That was the right word!" << endl;

    return 0;
}
