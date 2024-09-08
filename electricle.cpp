#include<iostream>
#include<string>
using namespace std;
double calculateDomesticBill(int units)
{
    double rate, fixedCharge;
    if(units <= 50)
    {
        rate = 4.75;
        fixedCharge = 230;
    }

    else if(units <= 150)
   {
       rate = 6.50;
       fixedCharge = 230;
}
else if(units <= 300)
{
    rate = 7.35;
    fixedCharge = 275;
}
else if(units <= 500)
{
    rate = 7.65;
    fixedCharge = 345;
}
else {
    rate = 7.95;
    fixedCharge = 400;
}
return (units * rate) + fixedCharge;
}
double calculateCommercialAsanirmanBill(int units)
{
    double rate, fixedCharge;
    if(units <= 100)
    {
        rate = 8.50;
        fixedCharge = 300;
    }
    else if(units <= 200)
    {
        rate = 8.80;
        fixedCharge = 300;
    }
    else if(units <= 500)
    {
        rate = 8.95;
        fixedCharge = 380;
    }
    else{
        rate = 8.95;
        fixedCharge = 460;
    }
    return (units * rate)+fixedCharge;
}
double calculateCommercialOver5KWBill(int units)
{
    double rate, fixedCharge;
    if(units <= 200)
    {
        rate = 8.85;
        fixedCharge = 135;
    }
    else if(units <= 500)
    {
        rate = 8.95;
        fixedCharge = 135;
    }
    else{
        rate = 8.95;
        fixedCharge = 150;
    }
    return (units * rate) + fixedCharge;
}
double calculateRoadLightBill(int units, bool isPopulationOver1Lakh)
{
    double rate = isPopulationOver1Lakh ? 8.10 : 7.55;
    double fixedCharge = isPopulationOver1Lakh ? 115 : 145;
    return (units * rate) + fixedCharge;
}
double calculateAgricultureBill(int units, bool isFlateRate)
{
    double rate = isFlateRate ? 7.45 : 7.10;
    double fixedCharge = isFlateRate ? 30 : 60;
    return (units * rate) + fixedCharge;
}
double calculateSmallIndustryBill(int units)
{
    double rate = (units <= 500) ? 6.45 : 6.85;
    double fixedCharge = (units <= 500) ? 80 : 110;
    return (units * rate) + fixedCharge;
}
double calculateMediumIndustryBill(int units)
{
    double rate = 7.00;
    double fixedCharge = 115;
    return (units * rate) + fixedCharge;
}
double calculateLargeIndustryBill(int units)
{
    double rate = 8.05;
    double fixedCharge = 105;
    return (units * rate) + fixedCharge;
}
double calculateWaterBill(double kiloliters, const string &category)
{
    double rate = 0, surcharge = 0.4, fixedCharge = 0;
    if(category == "Residential")
    {
        if(kiloliters <= 15)
        {
            rate = 2.5;
            fixedCharge = 50;
        }
        else if(kiloliters <= 30)
        {
            rate = 3.75;
            fixedCharge = 75;
        }
        else 
        {
            rate = 5.00;
            fixedCharge = 100;
        }
    }
    else if(category == "Commercial")
    {
        rate = 7.00;
        fixedCharge = 150;
    }
    
    
}
double getFixedCharge(string category)
{
    if(category == "Domestic")
    {
        return 125;
    }
    else if(category == "Commercial-Asanirman")
    {
        return 380;
    }
    else if(category == "Commercial-Over5KW")
    {
        return 460;
    }
    else if(category == "RoadLight")
    {
        return 115;
    }
    else if(category == "Agricultural")
    {
        return 30;
    }
    else if(category == "SmallIndustry")
    {
        return 110;
    }
    else if(category == "MediumIndustry")
    {
        return 105;
    }
    else if(category == "LargeIndustry")
    {
        return 215;
    }
    else 
    {
        return 0;
    }
}
double calculateBill(int units, string category)
{
    double electricityBill = 0.0;
    if(category == "Domestic")
    {
        electricityBill = calculateDomesticBill(units);
    }
    else if(category == "Commercial-Asaniran")
    {
        electricityBill = calculateCommercialAsanirmanBill(units);
    }
    else if(category == "Commercial-Over5KW")
    {
        electricityBill = calculateCommercialOver5KWBill(units);
    }
    else if(category == "RoadLight")
    {
        bool isPopulationOver1Lakh;
        electricityBill = calculateRoadLightBill(units, isPopulationOver1Lakh);
    }
    else if(category == "Agricultural")
    {
        bool isFlateRate;
        cout << "Is it flate rate (1 for Yes, 0 for No)? ";
        cin >> isFlateRate;
        electricityBill = calculateAgricultureBill(units, isFlateRate);
    }
    else if(category == "SmallIndustry")
    {
        electricityBill = calculateSmallIndustryBill(units);
    }
    else if(category == "MediumIndustry")
    {
        electricityBill = calculateMediumIndustryBill(units);
    }
    else if(category == "LargeIndustry")
    {
        electricityBill = calculateLargeIndustryBill(units);
    }
    else{
        cout << "Invalid category!";
        return 0;
    }
    
    
    return electricityBill;
    
}
int main()
{
    int units;
    string category;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    cout << "Enter the category(Domestic, Commercial-Asanirman, Commercial-Over5KM, RoadLight, Agricultural, SmallIndustry, MediumINdustry, LargeIndustry): ";
    cin >> category;
    double totalBill = calculateBill(units, category);

    cout << "Total Bill: Rs. " << totalBill << endl;
    return 0;
}