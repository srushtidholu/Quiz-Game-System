#include <iostream>
using namespace std;

class Quiz {
public:
    int score = 0;
    char answer;

    void question1() {
        cout << "\nQ1 (Medium). What is the size of int in most modern C++ compilers?\n";
        cout << "A. 2 bytes\nB. 4 bytes\nC. 8 bytes\n";
        cin >> answer;

        if(answer=='B' || answer=='b') {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    void question2() {
        cout << "\nQ2 (Hard). Which concept allows using the same function name with different parameters?\n";
        cout << "A. Inheritance\nB. Polymorphism\nC. Encapsulation\n";
        cin >> answer;

        if(answer=='B' || answer=='b') {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    void question3() {
        cout << "\nQ3 (Medium). Which header file is required for using cout and cin?\n";
        cout << "A. <stdio.h>\nB. <iostream>\nC. <conio.h>\n";
        cin >> answer;

        if(answer=='B' || answer=='b') {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    void question4() {
        cout << "\nQ4 (Hard). What is the output of: 5 + 2 * 3 ?\n";
        cout << "A. 21\nB. 11\nC. 15\n";
        cin >> answer;

        if(answer=='B' || answer=='b') {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    void question5() {
        cout << "\nQ5 (Hard). Which of the following is NOT a pillar of OOP?\n";
        cout << "A. Inheritance\nB. Polymorphism\nC. Compilation\n";
        cin >> answer;

        if(answer=='C' || answer=='c') {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    void startQuiz() {
        cout << "===== QUIZ GAME (Medium + Hard) =====\n";

        question1();
        question2();
        question3();
        question4();
        question5();

        cout << "\nFinal Score = " << score << "/5\n";
    }
};

int main() {
    Quiz q;
    q.startQuiz();

    return 0;
}