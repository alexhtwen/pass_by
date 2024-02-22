#include <iostream>
#include <cmath>
using namespace std;

void displayArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
}

void modifyScores(string name, float weight, int grades[], int size) // formal parameters
{
    for (int i = 0; i < size; i++)
    {
        grades[i] = sqrt(grades[i]) * 10;
    }
    name = "**" + name + "**";
    weight *= 1.25;
    cout << "Within modifyScores(): name = " << name << "\tweight = " << weight << endl;
    cout << "                       grades = ";
    displayArr(grades, size);
}

int main()
{
    int scores[5] = {60, 100, 0, 36, 85};
    string courseName = "CIS101";
    float weight = 1.0;
    int size = sizeof(scores) / sizeof(scores[0]);
    cout << "BEFORE calling modifyScores(): courseName = " << courseName << "\t   weight = " << weight << endl;
    cout << "                               scores = ";
    displayArr(scores, size);
    modifyScores(courseName, weight, scores, size); // actual arguments
    cout << "AFTER calling modifyScores() : courseName = " << courseName << "\t   weight = " << weight << endl;
    cout << "                               scores = ";
    displayArr(scores, size);
    return 0;
}
