#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Course class to represent each course
class Course {
public:
    string name;
    int courseId;
    vector<string> lessons;

    Course(string name, int id) : name(name), courseId(id) {}

    void addLesson(string lesson) {
        lessons.push_back(lesson);
    }
};

// Quiz class to represent each quiz
class Quiz {
public:
    string name;
    int quizId;
    vector<string> questions;

    Quiz(string name, int id) : name(name), quizId(id) {}

    void addQuestion(string question) {
        questions.push_back(question);
    }
};

// Student class to represent each student
class Student {
public:
    string name;
    int studentId;
    vector<int> enrolledCourses;
    vector<int> completedCourses;

    Student(string name, int id) : name(name), studentId(id) {}

    void enrollCourse(int courseId) {
        enrolledCourses.push_back(courseId);
    }

    void completeCourse(int courseId) {
        completedCourses.push_back(courseId);
    }
};

int main() {
    vector<Course> courses;
    vector<Quiz> quizzes;
    vector<Student> students;

    // Dummy data for courses
    courses.push_back(Course("C++ Programming", 1));
    courses.push_back(Course("Data Structures", 2));
    courses.push_back(Course("Algorithms", 3));

    // Dummy data for quizzes
    quizzes.push_back(Quiz("C++ Quiz 1", 1));
    quizzes.push_back(Quiz("Data Structures Quiz 1", 2));
    quizzes.push_back(Quiz("Algorithms Quiz 1", 3));

    // Dummy data for students
    students.push_back(Student("John", 1));
    students.push_back(Student("Alice", 2));
    students.push_back(Student("Bob", 3));

    // Main loop
    while (true) {
        cout << "1. Enroll in a course" << endl;
        cout << "2. View enrolled courses" << endl;
        cout << "3. Complete a course" << endl;
        cout << "4. View completed courses" << endl;
        cout << "5. Take a quiz" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int courseId;
                cout << "Enter the course ID to enroll: ";
                cin >> courseId;

                // Check if the course ID is valid
                if (courseId >= 1 && courseId <= courses.size()) {
                    students[0].enrollCourse(courseId);
                    cout << "Enrolled in the course successfully!" << endl;
                } else {
                    cout << "Invalid course ID. Please try again." << endl;
                }
                break;
            }
            case 2: {
                cout << "Enrolled Courses:" << endl;
                for (int courseId : students[0].enrolledCourses) {
                    cout << "- " << courses[courseId - 1].name << endl;
                }
                break;
            }
            case 3: {
                int courseId;
                cout << "Enter the course ID to complete: ";
                cin >> courseId;

                // Check if the course ID is valid
                if (courseId >= 1 && courseId <= courses.size()) {
                    students[0].completeCourse(courseId);
                    cout << "Course completed successfully!" << endl;
                } else {
                    cout << "Invalid course ID. Please try again." << endl;
                }
                break;
            }
            case 4: {
                cout << "Completed Courses:" << endl;
                for (int courseId : students[0].completedCourses) {
                    cout << "- " << courses[courseId - 1].name << endl;
                }
                break;
            }
            case 5: {
                int quizId;
                cout << "Enter the quiz ID to take: ";
                cin >> quizId;

                // Check if the quiz ID is valid
                if (quizId >= 1 && quizId <= quizzes.size()) {
                    // Code to take the quiz
                    cout << "Quiz taken successfully!" << endl;
                } else {
                    cout << "Invalid quiz ID. Please try again." << endl;
                }
                break;
            }
            case 6: {
                cout << "Exiting program..." << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
}
