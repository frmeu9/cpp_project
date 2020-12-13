//
// Created by user418 on 2020-12-05.
//

using namespace std;
#include <vector>

double calculate_mean_grades(double myarray[], int array_size)
{ // DO NOT SPECIFY ARRAY SIZE
    double mean_data(0);
    for (int i = 0; i < array_size; ++i) {
        mean_data += myarray[i];
    }

    return mean_data/array_size;
}

double calculate_mean_grades_vector(vector<double> array)
{
    /* void fonction(vector<int> const& a) {}
     * if you don't want to modify the array, you can use const& (instead of copying it, you just refer to it)
     */

    /* function can return a vector too
     * vector<double> anotherFunction(int a) {}
     */

    double mean_data(0);
    for (int i = 0; i < array.size(); ++i) {
        mean_data += array[i];
    }

    return mean_data/array.size();
}
