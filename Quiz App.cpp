#include <iostream>
using std::cout;
using std::cin;
using std::string;

int Score = 0;

struct quiz {
    string question;
    string answers[3];
    int correctAnswer;
};

void answers(int correct,int an) {
    if (correct < 4) {
        if (correct == an) {
            cout << "Correct\n";
            Score++;
        }
        else
            cout << "Wrong\n";
    }
    else {
        cout << "Disallowed value\n";
        cin >> correct;
        answers(correct, an);
    }
}

int main()
{
    quiz question[5];
    question[0].question = "What is The Most Spoken Lauguage in The Would ? \n";
    question[0].answers[0] = "Arabic\n";
    question[0].answers[1] = "English\n";
    question[0].answers[2] = "Spanish\n";
    question[0].correctAnswer = 2;

    quiz question2;
    question[1].question = "What is the biggest Country in the world ? \n";
    question[1].answers[0] = "Russia\n";
    question[1].answers[1] = "USA\n";
    question[1].answers[2] = "China\n";
    question[1].correctAnswer = 1;

    quiz question3;
    question[2].question = "The largest population gathering in the world ? \n";
    question[2].answers[0] = "Tokyo\n";
    question[2].answers[1] = "Beijing\n";
    question[2].answers[2] = "New Delhi\n";
    question[2].correctAnswer = 1;

    quiz question4;
    question[3].question = "How many official languages in the world ? \n";
    question[3].answers[0] = "100\n";
    question[3].answers[1] = "110\n";
    question[3].answers[2] = "106\n";
    question[3].correctAnswer = 3;

    quiz question5;
    question[4].question = "What is the most famous food in the world ? \n";
    question[4].answers[0] = "Hamburger\n";
    question[4].answers[1] = "Pasta\n";
    question[4].answers[2] = "Paitz\n";
    question[4].correctAnswer = 3;

    int correct;

    for (int i = 0; i < 5; i++) {
        cout << question[i].question;
        cout << "1. " << question[i].answers[0];
        cout << "2. " << question[i].answers[1];
        cout << "3. " << question[i].answers[2];
        cout << "Choose 1-3\n";
        cin >> correct;
        answers(correct, question[i].correctAnswer);
    }
    cout << "Your Score is : " << Score;
    return 0;
}