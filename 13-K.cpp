#include <iostream>
#include <string>
using namespace std;

// Base class: Account
class Account {
protected:
    string accountNumber;
    double balance;
    double annualInterestRate;
    string dateCreated;

public:
    void getAccountDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Balance: ";
        cin >> balance;
        cout << "Enter Annual Interest Rate (in %): ";
        cin >> annualInterestRate;
        cout << "Enter Date Created (DD/MM/YYYY): ";
        cin >> dateCreated;
    }

    void displayAccountDetails() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Annual Interest Rate: " << annualInterestRate << "%" << endl;
        cout << "Date Created: " << dateCreated << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful! New Balance: " << balance << endl;
    }
};

// Derived class: CurrentAccount
class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    void setOverdraftLimit(double limit) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawal successful! New Balance: " << balance << endl;
        } else {
            cout << "Withdrawal exceeds overdraft limit!" << endl;
        }
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public Account {
public:
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }
};

// Main function
int main() {
    int choice;
    cout << "Choose Account Type:\n1. Current Account\n2. Savings Account\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        CurrentAccount currentAccount;
        cout << "\nEnter Current Account Details:\n";
        currentAccount.getAccountDetails();

        double overdraftLimit;
        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;
        currentAccount.setOverdraftLimit(overdraftLimit);

        double withdrawAmount;
        cout << "\nEnter amount to withdraw: ";
        cin >> withdrawAmount;
        currentAccount.withdraw(withdrawAmount);

        double depositAmount;
        cout << "\nEnter amount to deposit: ";
        cin >> depositAmount;
        currentAccount.deposit(depositAmount);

    } else if (choice == 2) {
        SavingsAccount savingsAccount;
        cout << "\nEnter Savings Account Details:\n";
        savingsAccount.getAccountDetails();

        double withdrawAmount;
        cout << "\nEnter amount to withdraw: ";
        cin >> withdrawAmount;
        savingsAccount.withdraw(withdrawAmount);

        double depositAmount;
        cout << "\nEnter amount to deposit: ";
        cin >> depositAmount;
        savingsAccount.deposit(depositAmount);
    } else {
        cout << "Invalid choice! Exiting program." << endl;
    }

    return 0;
}
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Calculator</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            background-color: #f4f4f4;
        }
        .calculator {
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }
        input[type="text"] {
            width: 100%;
            padding: 10px;
            margin-bottom: 10px;
            border: 1px solid #ccc;
            border-radius: 5px;
        }
        button {
            width: 23%;
            padding: 10px;
            margin: 1%;
            border: none;
            border-radius: 5px;
            background-color: #007BFF;
            color: white;
            cursor: pointer;
        }
        button:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>

<div class="calculator">
    <input type="text" id="result" disabled>
    <div>
        <button onclick="clearResult()">C</button>
        <button onclick="appendToResult('/')">/</button>
        <button onclick="appendToResult('*')">*</button>
        <button onclick="appendToResult('-')">-</button>
    </div>
    <div>
        <button onclick="appendToResult('7')">7</button>
        <button onclick="appendToResult('8')">8</button>
        <button onclick="appendToResult('9')">9</button>
        <button onclick="appendToResult('+')">+</button>
    </div>
    <div>
        <button onclick="appendToResult('4')">4</button>
        <button onclick="appendToResult('5')">5</button>
        <button onclick="appendToResult('6')">6</button>
        <button onclick="calculateResult()">=</button>
    </div>
    <div>
        <button onclick="appendToResult('1')">1</button>
        <button onclick="appendToResult('2')">2</button>
        <button onclick="appendToResult('3')">3</button>
    </div>
    <div>
        <button onclick="appendToResult('0')">0</button>
    </div>
</div>

<script>
    function appendToResult(value) {
        document.getElementById('result').value += value;
    }

    function clearResult() {
        document.getElementById('result').value = '';
    }

    function calculateResult() {
        const resultField = document.getElementById('result');
        try {
            resultField.value = eval(resultField.value);
        } catch (error) {
            resultField.value = 'Error';
        }
    }
</script>

</body>
</html>
