#include <iostream>
#include <string>
using namespace std;
int main() {
   string questions[] = {
       "Who is the founder of Microsoft?",
       "Which data type is used to store decimal numbers in C++?",
       "What is the largest planet in our solar system?",
       "Which year did Pakistan gain independence?",
       "What is the default value of an uninitialized variable in C++?",
       "Who wrote the play Romeo and Juliet?",
       "What symbol is used to start a comment in C++?",
       "What is the boiling point of water?",
       "How many continents are there in the world?",
       "What is the largest mammal in the world?",
       "Which country won the 2022 FIFA world cup?",
       "What is the national animal of Pakistan?",
       "Which country has the largest population in the world?",
       "Which continent is the Sahara Desert located in?",
       "Who was the first woman to win a Nobel Prize?",
       "Which country is known as the Land of the Rising Sun?",
    };

    string answers[] = {
        "Bill Gates",
        "float or double",
        "Jupiter",
        "1947",
        "Undefined",
        "William Shakespeare",
        "//",
        "100°C",
        "7",
        "Blue Whale",
        "Argentina",
        "Markhor",
        "China",
        "Africa",
        "Marie Curie",
        "Japan",
    };

    int score = 0;
    string userAnswer;
    for(int i = 0; i <= 14; i++){
        cout << questions[i] << endl;
       getline(cin, userAnswer); 

        if(userAnswer == answers[i]){
            cout << "Correct!" << endl;
            score++;
        }
        else{
            cout << "Incorrect!" << endl;
            cout << "The correct answer is: " << answers[i] << endl;
        }
    }
    cout << "Your Final Score is " << score << " out of 16";

    return 0;
}