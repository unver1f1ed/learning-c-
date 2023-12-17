#include <iostream>

int main()
{
    std::string questions[] = {"1.What's the value of 'p'?",
                               "2.Is water wet?",
                               "3.What's my real name?",
                               "4.How much money I currently have on by bank account?"};

    std:: string options[][4] = {{"A. 3.14","B. 2.14","C. 3.15","D. 2.15"},
                                 {"A. Yes, it's wet","B. I don't know","C. No, it's dry","D. What is water?"},
                                 {"A. Unverified","B. Adolf","C. Bohdan","D. How am I supposed to know your real name?"},
                                 {"A. More then enough","B. Below 1000$","C. Above 1000$","D. None"}};

    char answerKey[] = {'A','B','C','D'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "=============================\n";
        std::cout << questions[i] << '\n';
        std::cout << "=============================\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout<< options[i][j] << '\n';
        }
        
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
        
    }
    
    std::cout << "=============================\n";
    std::cout << "=          Results          =\n";
    std::cout << "=============================\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "NUMBER OF QUESTIONS: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";
    
    return 0;
}