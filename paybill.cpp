#include<iostream>
#include<iomanip>
#include<vector>
#include<ctime>
#include<string>
using namespace std;
struct Customer
{
    string name;
    string category;
    int unitsConsumed;
    float totalBill;
    float fixedCharge;
    float tax;
    float discount;
    float surcharge;
    float finalBill;
    string paymentPlan;
    string paymentStatus;
    float amountPaid;
    float remainingBalance;
    string dueDate;
    float lateDate;
    string paymentMethod;
};
void displayPaymentMethods()
{
    cout << "\n--- Payment Method ---\n";
    cout << "1. Credit Card\n";
    cout << "2. Debit Card\n";
    cout << "3. Bank Transfer\n";
    cout << "4. UPI\n";
}
void selectPaymentMethod(Customer &customer)
{
    int method;
    displayPaymentMethods();
    cout << "Select a payment method: ";
    cin >> method;
    switch(method)
    {
        case 1:
        customer.paymentMethod = "Credit Card";
        break;
        case 2:
        customer.paymentMethod = "Debit Card";
        break;
        case 3:
        customer.paymentMethod = "Bank Transfer";
        break;
        case 4:
        customer.paymentMethod = "UPI";
        break;
        default:
        cout << "Invalid option. Defaulting to Credit Card.\n";
        customer.paymentMethod = "Credit Card";
    }
    cout << "Payment method selected: " << customer.paymentMethod << endl;
}
void processCreditCardPayment(Customer &customer, float payment )
{
    string cardNumber;
    cout << "Enter your credit card number: ";
    cin >> cardNumber;
    cout << "Processing payment...\n";
    customer.amountPaid += payment;
    customer.remainingBalance -= payment;
    cout << "Payment of Rs. " << payment  << " processed using Credit Card.\n";
}
void processDebitCardPayment(Customer &customer, float payment)
{
    string cardNumber;
    cout << "Enter your debit card number: ";
    cin >> cardNumber;
    cout << "Processing payment...\n";
    customer.amountPaid += payment;
    customer.remainingBalance -= payment;
    cout << "Payment of Rs. " << payment  << " processed using Debit Card.\n";
}
void processBankTransferPayment(Customer &customer, float payment)
{
    string accountNumber;
    cout << "Enter your Bank Account number: ";
    cin >> accountNumber;
    cout << "Processing payment...\n";
    customer.amountPaid += payment;
    customer.remainingBalance -= payment;
    cout << "Payment of Rs. " << payment  << " processed using Bank Transfer.\n";
}
void processUPIPayment(Customer &customer, float payment)
{
    string upiId;
    cout << "Enter your UPI ID: ";
    cin >> upiId;
    cout << "Processing payment...\n";
    customer.amountPaid += payment;
    customer.remainingBalance -= payment;
    cout << "Payment of Rs. " << payment  << " processed using UPI.\n";
}
void processPayment(Customer &customer)
{
    if(customer.remainingBalance == 0)
    {
        cout << "Bill already paid!\n";
        return;
    }
    float payment;
    cout << "Enter amount to Pay: ";
    cin >> payment;
    if(payment > customer.remainingBalance)
    {
        cout << "Payment exceeds remaining balance. please enter a valid amount.\n";
        return;
    }
    selectPaymentMethod(customer);
    if(customer.paymentMethod == "Credit Card")
    {
        processCreditCardPayment(customer, payment);
    }
    else if(customer.paymentMethod == "Debit Card")
    {
        processDebitCardPayment(customer, payment);
    }
    else if(customer.paymentMethod == "Bank Transfer")
    {
        processBankTransferPayment(customer, payment);
    }
    else if(customer.paymentMethod == "UPI")
    {
        processUPIPayment(customer, payment);
    }
    if(customer.remainingBalance == 0)
    {
        customer.paymentStatus = "Paid";
        cout << "Payment successful! Your bill is fully paid";
        cout << "Partial payment successful! Remaining balance: Rs. " << customer.remainingBalance << endl;
    }
}
int main()
{
    vector<Customer>
    customers;
    int choice;
    do
    {
        cout << "\n--- Billing System Menu---\n";
        cout << "1. Add Customer\n";
        cout << "2. Display All Bills\n";
        cout << "3. Process Payment\n";
        cout << "4. Exit\n";
        cout << "5. Enter your choice\n";
        cin >> choice;
        if(choice == 1)
        {
            Customer 
            customer;
            cin.ignore();
            cout << "Enter customer name: ";
            getline(cin, customer.name);
            cout << "Enter customer cetegory: ";
            getline(cin, customer.category);
            cout << "Enter units consumed: ";
            cin >> customer.unitsConsumed;
            customer.totalBill = customer.unitsConsumed * 5.0;
            customer.remainingBalance = customer.totalBill;
            customer.paymentStatus = "Unpaid";
            
        }
        else if(choice == 2)
        {
            if(customers.empty())
            {
                cout << "No customer added yet!" << endl;
            }
            else{
                for(const auto&customer : customers)
                {
                    cout << "\n--- Customer Bill -- \n";
                    cout << "name: " << customer.name << endl;
                    cout << "Cetegory: " << customer.category << endl;
                    cout << "Units Consumed: " << customer.unitsConsumed << " units" << endl;
                    cout << "Total Bill: Rs. " << customer.totalBill << endl;
                    cout << "Remaining Balance: Rs. " << customer.remainingBalance << endl;
                    cout << "Payment Status: " << customer.paymentStatus << endl;
                    cout << "Payment Method: " << customer.paymentMethod << endl;
                }
            }
        }
        else if(choice == 3)
        {
            if(customers.empty())
            {
                cout << "No customer added yet!" << endl;
            }
            else 
            {
                string customerName;
                cin.ignore();
                cout << "Enter customer name for Payment: ";
                getline(cin, customerName);
                bool found = false;
                for(auto&customer : customers)
                {
                    if(customer.name == customerName)
                    {
                        processPayment(customer);
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    cout << " customer not found.\n";
                }
            }
        }
        else if(choice != 4)
        {
            cout << "Invalid option. Please try again.\n";
        }
    }
    while(choice != 4);
    cout << "Exiting the billing system...\n";
    return 0;
}