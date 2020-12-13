#include <iostream>
#include <vector>
#include "calculate_mean.h"
using namespace std;

int main() {
    // declare an array (static array)
    // type_of_data name[size]

    int highscores[5];
    string username[2];

    int const item(5);
    // array size MUST BE a constant
    double highscores2[item];

    highscores[0] = 100;
    highscores[1] = 99;
    highscores[2] = 98;
    highscores[3] = 97;
    highscores[4] = 96;

//    for (int i = 0; i < item; ++i) {
//        cout << highscores[i] << endl;
//    }

    // EXERCISE
    int const numberOfGrades(6);
    double grades[numberOfGrades];

    grades[0] = 84.6;
    grades[1] = 91.5;
    grades[2] = 87.7;
    grades[3] = 95.6;
    grades[4] = 98.9;
    grades[5] = 85.5;

    double mean_grade(0.0);

    for (int i = 0; i < numberOfGrades; ++i) {
        mean_grade += grades[i];
    }

    cout << "Average score: " << mean_grade / numberOfGrades << endl;
    cout << "Size of my array: " << size(grades) << endl;

    double mean2(0.0);
    mean2 = calculate_mean_grades(grades, numberOfGrades);

    cout << "Average score calculated by function: " << mean2 << endl;

    // dynamic array
    // must #include <vector>
    // vector<type> name(size)

    vector<int> dynamic_array(5);
    vector<int> array3(3, 3); // array of size of 3 where all values are 3
    vector<string> nameList(12, "No name"); // array of 12 where all values are No Name
    vector<double> empty_array; // empty array

    cout << "array3 at the beginning" << endl;
    for (int i = 0; i < array3.size(); ++i) {
        cout << array3[i] << endl;
    }

    // delete the last value
    array3.pop_back();

    // add values to the array
    array3.push_back(4);
    array3.push_back(5);

    cout << "array3 at the end" << endl;
    for (int i = 0; i < array3.size(); ++i) {
        cout << array3[i] << endl;
    }

    vector<double> scores;
    scores.push_back(12.5);  // adding value in the vector
    scores.push_back(19.5);
    scores.push_back(6);
    scores.push_back(12);
    scores.push_back(14.5);
    scores.push_back(15);

    double mean3(0);
    for (int i = 0; i < scores.size(); ++i) {
        mean3 += scores[i];
    }

    cout << "Mean of the array is " << mean3/scores.size() << endl;

    // vectors and functions
    double mean4(0.0);
    mean4 = calculate_mean_grades_vector(scores);
    cout << "Mean of the array name SCORES, calculated with vector type: " << mean4 << endl;

    // multi-dimensional array
    // type name[size1][size2]

    int size1(5), size2(4);
    int multiDimArray[size1][size2];
    vector<vector<int>> array_dimension_variable;

    array_dimension_variable.push_back(vector<int>(5));  // adding an element with 5 elements [n1 n2 n3 n4 n5]
    array_dimension_variable.push_back(vector<int>(3, 4)); // adding an elements of length 3 [4 4 4]
    array_dimension_variable[0].push_back(8);
//    array_dimension_variable[2][3] = 9;

    string userName("JohnDoe");
    cout << "username: " << userName << endl;
    userName[4] = 'F';
    cout << "new username: " << userName << endl;

    string sentence("The lazy brown fox jumps over the lazy dog. ");
    cout << sentence << endl;
    cout << "This sentence has " << sentence.size() << " letters." << endl;

    string firstName("John");
    string lastName("Doe");
    string total;
    total += firstName;
    total += " ";
    total += lastName;

    cout << "Your name is " << total << "." << endl;

    return 0;
}