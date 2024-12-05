#include<iostream>
#include<string>
using namespace std;
void inputPatientDetails(string &name, int &age, string &sex, string &refBy)
{
cout << "Enter patient name: ";
getline(cin, name);
cout << "Enter patient's age: ";
cin >> age;
cout << "Enter patient's sex: ";
getline(cin, sex);
cin.ignore();
cout << "Enter referred by doctor: ";
getline(cin, refBy);
}
void inputTests(string selectedTests[], int &testCount, int &totalCharge)
{
cout << "\nInvestigations:\n";
cout << "1. COMPLETE BLOOD COUNT - Rs. 250\n";
cout << "2. ERYTHROCYTE SEDIMANTATION RATE - Rs. 120\n";
cout << "3. SGOT - Rs. 200\n";
cout << "4. SGPT - Rs. 200\n";
cout << "5. BLOOD SUGER(FASTING) - Rs. 100\n ";
cout << "6. CREATININE - Rs. 100\n";
cout << "7. BLOOD UREA NITROGEN - Rs. 120\n";
cout << "8. GLYCOSYLATED HAEMOGLOBIN(HBA1C) - Rs. 500\n";
cout << "9. URINE ROUTINE EXAMINATION - Rs. 120\n";
string test;
cout << "Enter number of test or name: \n";
 while(true)
 {
    cout << "enter test: ";
    getline(cin, test);
    if(test == "done")
    {
        break;
    }
    selectedTests[testCount] = test;
    testCount++;
    if(test == "1" || test == "COMPLETE BLOOD COUNT") 
    totalCharge += 250;
    else if(test == "2" || test == "ERYTHROCYTE SEDIMANTATION RATE") 
    totalCharge += 120;
    else if(test == "3" || test == "SGOT") 
    totalCharge += 200;
    else if(test == "4" || test == "SGPT") 
    totalCharge += 200;
    else if(test == "5" || test == "BLOOD SUGER(FASTING)") 
    totalCharge += 100;
    else if(test == "6" || test == "CREATININE") 
    totalCharge += 100;
    else if(test == "7" || test == "BLOOD UREA NITROGEN") 
    totalCharge += 120;
    else if(test == "8" || test == "GLYCOSYLATED HAEMOGLOBIN(HBA1C)") 
    totalCharge += 120;
    else 
    {
        cout << "Invalid test or number:\n";
        testCount--;
    }
 }
}
void generateReport(const string &name, int &age, const string &sex, const string &refBy, const string selectedTests[], int testCount, int totalCharge)
{ 
cout<<"                           BINNANI LABORATORY\n";
cout << "                 21-SADUL COLONY BIKANER -1(Raj)\n";
cout << "                  Mob. 08947842747, 8947846677\n";
cout << "                                SLIP              \n";
cout << "Receipt No.  10/24-25/32194                         Net Id/Password 102430621 / 29CF1780\n";
cout << "____________________________________________________________________________________\n";
cout << "Patient Id 102430621                                  Date & Time :______________\n";
cout <<"Patient Name: " << name <<  "                                   Relation" << endl;
cout <<"Age/Sex: " << age << "yrs/ " << sex <<"                             contact No.____________" << endl;
cout <<"Refferred By: Dr. " << refBy <<"                                    Receipt Date___________" << endl;
cout <<"____________________________________________________________________________________\n";
cout << "Recived with thanks a sum of Rs." << totalCharge << " form Mr. " << name << " By: Cash on a/c of:\n";
cout << "Sr.  Invesigations                   Charge\n" ;
for (int i = 0; i < testCount; i++)
 {
    if(selectedTests[i] == "1" || selectedTests[i] == "COMPLETE BLOOD COUNT")
    cout << "1.  COMPLETE BLOOD COUNT -           250\n";
    if(selectedTests[i] == "2" || selectedTests[i] == "ERYTHROCYTE SEDIMANTATION RATE")
    cout << "2.  ERYTHROCYTE SEDIMANTATION RATE - 120\n";
    if(selectedTests[i] == "3" || selectedTests[i] == "SGOT")
    cout << "3.  SGOT -                           200\n";
    if(selectedTests[i] == "4" || selectedTests[i] == "SGPT")
    cout << "4.  SGPT -                           200\n";
    if(selectedTests[i] == "5" || selectedTests[i] == "BLOOD SUGER(FASTING)")
    cout << "5.  BLOOD SUGER(FASTING) -           100\n";
    if(selectedTests[i] == "6" || selectedTests[i] == "CREATININE")
    cout << "6.  CREATININE -                     100\n";
    if(selectedTests[i] == "7" || selectedTests[i] == "BLOOD UREA NITROGEN")
    cout << "7.  BLOOD UREA NITROGEN -            120\n";
    if(selectedTests[i] == "8" || selectedTests[i] == "GLYCOSYLATED HAEMOGLOBIN(HBA1C)")
    cout << "8.  GLYCOSYLATED HAEMOGLOBIN(HBA1C) -500\n";
    if(selectedTests[i] == "9" || selectedTests[i] == "URINE ROUTINE EXAMINATION")
    cout << "9.  URINE ROUTINE EXAMINATION - 120\n";
 }
cout << "\n                    Total Charge: Rs." << totalCharge << endl;
cout << "__________________________________________________________________________\n";
cout << "                                                   Rec/Print By KARAN SINGH\n";
}
int main()
{
    string patientName, refBy;
    int age;
    string sex;
    int totalCharge = 0;
    string selectedTests[20];
    int testCount = 0;
    inputPatientDetails(patientName, age, sex, refBy);
    inputTests(selectedTests, testCount, totalCharge);
    generateReport(patientName, age, sex, refBy, selectedTests, testCount, totalCharge);
    return 0;
}
