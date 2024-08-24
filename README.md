# Online Quiz Game

This is a simple C++ console-based quiz game. The game allows users to register, answer questions, and receive a score at the end. It also displays the correct answers after the quiz is completed.

## Features

- **User Registration:** Users can enter their username before starting the quiz.
- **Quiz Questions:** The quiz contains a set of predefined questions on various topics.
- **Scoring System:** The user's score is calculated based on the number of correct answers.
- **Correct Answers Display:** At the end of the quiz, the correct answers to all questions are displayed.

## How to Run

1. **Clone the repository:**
    ```sh
    git clone https://github.com/your-username/online-quiz-game.git
    ```
2. **Navigate to the directory:**
    ```sh
    cd online-quiz-game
    ```
3. **Compile the code:**
    ```sh
    g++ -o quiz_game main.cpp
    ```
4. **Run the executable:**
    ```sh
    ./quiz_game
    ```

## Code Overview

### `Question` Structure
- **questionText**: The text of the question.
- **options[4]**: The four possible answers.
- **correctAnswer**: The correct answer for the question (e.g., 'A', 'B').

### `User` Structure
- **username**: The username of the player.
- **score**: The score of the player.

### Functions
- **`registerUser(User &user)`**: Registers the user by asking for their username.
- **`displayQuestion(const Question &q, int questionNumber)`**: Displays a question and its options.
- **`displayCorrectAnswers(const vector<Question> &questions)`**: Displays the correct answers at the end of the quiz.
- **`startQuiz(User &user, const vector<Question> &questions)`**: Runs the quiz, checks answers, and updates the score.

## Example

Here’s an example of what a quiz session might look like:

```plaintext
Enter your username: JohnDoe

Welcome, JohnDoe! Let's start the quiz.

Question 1: What is the capital of France?
A: Paris
B: London
C: Berlin
D: Rome
Your answer: A

...

Quiz completed!
Your score: 4/5

Correct Answers:
Question 1: A
Question 2: B
...
