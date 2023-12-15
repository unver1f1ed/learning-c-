#include <iostream>
#include <iomanip>

void ShowBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;


    do{
        std::cout << "*****************:\n";
        std::cout << "enter your choice:\n";
        std::cout << "*****************:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdrsw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice){
        case 1: ShowBalance(balance);
                break;
        case 2: balance += deposit();
                ShowBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                ShowBalance(balance);
                break;
        case 4: std::cout << "thanks for visiting!\n";
                break;
        default:std::cout << "invalid choice";

        return 0;
        }
    }while (choice != 4);
}

void ShowBalance(double balance){
    std:: cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    double amount = 0;
    std:: cout << "Enter amount to be deposited:";
    std:: cin >> amount;

    if(amount >0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount:\n";
        return 0;
    }

    return amount;
}
double withdraw(double balance){
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std:: cin >> amount;

    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
    }
    else{
        return amount;
    }

    return 0;
}