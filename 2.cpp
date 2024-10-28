#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// define studentType struct
struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// function prototypes
void readStudentData(studentType students[], int size);
void assignGrades(studentType students[], int size);
int findHighestScore(const studentType students[], int size);
void printHighestScorers(const studentType students[], int size, int highestScore);
void printAllStudents(const studentType students[], int size);

int main() {
    const int SIZE = 20;
    studentType students[SIZE];

    // function calls
    readStudentData(students, SIZE);
    assignGrades(students, SIZE);
    printAllStudents(students, SIZE);
    int highestScore = findHighestScore(students, SIZE);
    printHighestScorers(students, SIZE, highestScore);

    return 0;
}

// function to read students' data
void readStudentData(studentType students[], int size) {
    cout << "Enter student data (first name, last name, and test score):\n";
    for (int i = 0; i < size; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> students[i].studentFName >> students[i].studentLName >> students[i].testScore;
    }
}

// function to assign grades based on test score
void assignGrades(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore >= 90) students[i].grade = 'A';
        else if (students[i].testScore >= 80) students[i].grade = 'B';
        else if (students[i].testScore >= 70) students[i].grade = 'C';
        else if (students[i].testScore >= 60) students[i].grade = 'D';
        else students[i].grade = 'F';
    }
}

// function to find the highest test score
int findHighestScore(const studentType students[], int size) {
    int highestScore = students[0].testScore;
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > highestScore) {
            highestScore = students[i].testScore;
        }
    }
    return highestScore;
}

// function to print names of students with the highest score
void printHighestScorers(const studentType students[], int size, int highestScore) {
    cout << "\nStudents with the highest score (" << highestScore << "):\n";
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highestScore) {
            cout << left << setw(15) << (students[i].studentLName + ",")  // Add comma after last name
                 << setw(15) << students[i].studentFName;
            cout << "Score: " << setw(3) << students[i].testScore << ", Grade: " << students[i].grade << endl;
        }
    }
}

// function to print all students' data
void printAllStudents(const studentType students[], int size) {
    cout << "\nComplete List of Students:\n";
    cout << left << setw(15) << "Last Name" << setw(15) << "First Name" << setw(10) << "Score" << "Grade" << endl;
    cout << "---------------------------------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << left << setw(15) << (students[i].studentLName + ",")  // Add comma after last name
             << setw(15) << students[i].studentFName 
             << setw(10) << students[i].testScore 
             << students[i].grade << endl;
    }
}

