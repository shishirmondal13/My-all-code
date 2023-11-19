#include<iostream>
using namespace std;

class Student {
private:
    int marks[5];
public:
    void calculate_marks() {
        cout << "Enter marks for 5 courses: " << endl;
        for(int i = 0; i < 5; i++) {
            cout << "Enter mark for course " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int get_total_marks() {
        int sum = 0;
        for(int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum;
    }
};

void display_result(Student students[], int n) {
    int maxIndex = 0, minIndex = 0;
    float totalSum = 0;
    int maxMark = students[0].get_total_marks();
    int minMark = students[0].get_total_marks();

    for(int i = 0; i < n; i++) {
        totalSum += students[i].get_total_marks();
        if(students[i].get_total_marks() > maxMark) {
            maxMark = students[i].get_total_marks();
            maxIndex = i;
        }
        if(students[i].get_total_marks() < minMark) {
            minMark = students[i].get_total_marks();
            minIndex = i;
        }
    }

    float classAverage = totalSum / (n * 5.0);
    cout << "Student with highest marks: " << maxIndex + 1 << endl;
    cout << "Student with lowest marks: " << minIndex + 1 << endl;
    cout << "Class Average: " << classAverage << endl;
}

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    for(int i = 0; i < numStudents; i++) {
        cout << "Enter marks for Student " << i + 1 << ":" << endl;
        students[i].calculate_marks();
    }

    display_result(students, numStudents);

    return 0;
}
