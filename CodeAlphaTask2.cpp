#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Question
{
    string questionText;
    string options[4];
    char correctAnswer;
};

struct User
{
    string username;
    int score;
};

void registerUser(User &user)
{
    cout << "Enter your username: ";
    cin >> user.username;
    user.score = 0;
}

void displayQuestion(const Question &q, int questionNumber)
{
    cout << "Question " << questionNumber + 1 << ": " << q.questionText << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << char('A' + i) << ": " << q.options[i] << endl;
    }
    cout << "Your answer: ";
}

void displayCorrectAnswers(const vector<Question> &questions)
{
    cout << "\nCorrect Answers:\n";
    for (size_t i = 0; i < questions.size(); i++)
    {
        cout << "Question " << i + 1 << ": " << questions[i].correctAnswer << endl;
    }
}

void startQuiz(User &user, const vector<Question> &questions)
{
    char userAnswer;
    for (size_t i = 0; i < questions.size(); i++)
    {
        displayQuestion(questions[i], i);
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);
        if (userAnswer == questions[i].correctAnswer)
        {
            user.score++;
        }
    }
}

int main()
{
    vector<Question> questions = {
        {"What is the capital of France?", {"Paris", "London", "Berlin", "Rome"}, 'A'},
        {"Which is the largest planet in our solar system?", {"Earth", "Jupiter", "Saturn", "Mars"}, 'B'},
        {"Who wrote 'Romeo and Juliet'?", {"Charles Dickens", "William Shakespeare", "Leo Tolstoy", "Mark Twain"}, 'B'},
        {"What is the chemical symbol for water?", {"H2O", "O2", "CO2", "NaCl"}, 'A'},
        {"Which country is known as the Land of the Rising Sun?", {"China", "South Korea", "Japan", "Thailand"}, 'C'}
    };

    User user;
    registerUser(user);

    cout << "\nWelcome, " << user.username << "! Let's start the quiz.\n";
    startQuiz(user, questions);

    cout << "\nQuiz completed!\n";
    cout << "Your score: " << user.score << "/" << questions.size() << endl;

    displayCorrectAnswers(questions);

    return 0;
}
