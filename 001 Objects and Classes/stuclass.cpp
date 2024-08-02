#include<iostream>
using namespace std;

class Student{
private:
    int scores[5];

public:
    void inputScores(){
    cout<<"Enter 5 exam scores: ";
    for (int i = 0; i<5; i++){
        cin >> scores[i];
    }
    }

    int calculateTotalScore(){
    int totalScore = 0;
    for (int i = 0; i<5; i++){
        totalScore += scores[i];
    }
    return totalScore;
    }
};

int main(){
Student kristen;
kristen.inputScores();
int kristenTotalScore = kristen.calculateTotalScore();
cout<<"Kristen's Total Score: " <<kristenTotalScore<<endl;
return 0;
}
