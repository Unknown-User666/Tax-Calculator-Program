#include <iostream>
#include <fstream>
#include <vector>
#include <array>

//Global variables
    double grossIncome;
    double tips;
    double stateTaxRate = .0305;
    double federalTaxRate;
    double socialSecurityTaxRate = .124;
    double medicareTaxRate = .0145;
    int dependants;
    
//Determining tax bracket
float taxBracket(double grossIncome)
{
    if (grossIncome > 11600) 
    {
        double federalTaxRate = .10;
        return 1;
    }
    if (grossIncome > 47150)
    {
        double federalTaxRate = .12;
        return 1;
    }
    if (grossIncome > 100525)
    {
        double federalTaxRate = .22;
        return 1;
    }
    if (grossIncome > 191950)
    {
        double federalTaxRate = .24;
        return 1;
    }
    if (grossIncome > 243725)
    {
        double federalTaxRate = .32;
        return 1;
    }
    if (grossIncome > 609350)
    {
        double federalTaxRate = .35;
        return 1;
    }
    if (grossIncome < 609350)
    {
        double federalTaxRate = .37;
        return 1;
    }
    return 0;
}

int main()
{

//Determining tax bracket

//Tax deductions variables
    int dependants; 
//Input deductions
    std::cout << "How many dependants do you claim?: " << std::endl;
    std::cin >> dependants;

//Calculating deduction's worth
    double dependantsWorth = 2000 * dependants;

//Input your grossIncome
    std::cout << "Enter your gross income: " << std::endl;
    std::cin >> grossIncome; 

//Input abd tax your tips
    std::cout << "Enter the amount of tips earned this year: " << std::endl;
    std::cin >> tips;
    double tipsTax; ////////////////////////////////////////////do later///////////////////////////////////////////////

//Configuring the tax amount to take out of the paycheck
    double stateTaxTotal = grossIncome * stateTaxRate;
    double federalTaxTotal = grossIncome * federalTaxRate;
    double socialSecurityTaxTotal = grossIncome * socialSecurityTaxRate;
    double medicareTaxTotal = grossIncome * medicareTaxRate;
    double takeHomePay = grossIncome - stateTaxTotal - federalTaxTotal - socialSecurityTaxTotal - medicareTaxTotal + dependantsWorth;

//Displayed results
    std::cout << "___________________________________________________" << std::endl;
    std::cout << "Number of dependants: " << dependants << std::endl;
    std::cout << "dependants deduction amount: $" << dependantsWorth << std::endl;
    std::cout << "Gross Income: $" << grossIncome << std::endl;
    std::cout <<"State Tax Amount: $" << stateTaxTotal << std::endl;
    std::cout <<"Feder Tax Amount: $" << federalTaxTotal << std::endl;
    std::cout << "Social Security Tax Amount: $" << socialSecurityTaxTotal << std::endl;
    std::cout << "Medicare Tax Amount: $" << medicareTaxTotal << std::endl;
    std::cout << "___________________________________________________" << std::endl;
    std::cout << "Take Home Pay: $" << takeHomePay << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;

//Adds all results to taxReturn
    double taxReturn[8] = {dependants, dependantsWorth, grossIncome, stateTaxTotal, federalTaxTotal, socialSecurityTaxTotal, medicareTaxTotal, takeHomePay};

// Save Data to a seperate file

    return 0;
}