#include <iostream>

int main()
{
    double temp;
    char unit;
    char f_unit;
    
    std::cout << "***temperature conversion***\n";

    std::cout << "F = fahrenheit\n";
    std::cout << "C = celcius\n";
    std::cout << "K = kelvins\n";
    std::cout << "R = rankine\n";
   
    std::cout << "what unit you would like to convert to?:";
    std::cin >> unit;
    std::cout << "from unit:";
    std::cin >> f_unit;
    /////////////////////////////////////////////////////////////////////////
    if ((unit == 'F' || unit =='f') && (f_unit == 'C' || f_unit == 'c'))
    {
        std::cout << "enter the temperature in celcius to convert to fahrenheit:";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is:" << temp << "F\n";
    }
    else if ((unit == 'K' || unit =='k') && (f_unit == 'C' || f_unit == 'c'))
    {
        std::cout << "enter the temperature in celcius to convert to kelvins:";
        std::cin >> temp;

        temp = temp + 273.15;
        std::cout << "temperature is:" << temp << "K\n";
    }
    else if ((unit == 'R' || unit =='r') && (f_unit == 'C' || f_unit == 'c'))
    {
        std::cout << "enter the temperature in celcius to convert to rankine:";
        std::cin >> temp;

        temp = (temp + 273.15) * (9 / 5);
        std::cout << "temperature is:" << temp << "R\n";
    }
    else{
        std::cout << "Enter valid unit\n";
    }
    /////////////////////////////////////////////////////////////////////////
    if ((unit == 'C' || unit == 'c') && (f_unit == 'F' || f_unit == 'f'))
    {
        std::cout << "enter the temperature in fahrenheit to convert to celcius:";
        std::cin >> temp;

        temp = (temp - 32) / (9/5);
        std::cout << "temperature is:" << temp << "C\n";
    }
    else if ((unit == 'K' || unit == 'k') && (f_unit == 'F' || f_unit == 'f'))
    {
        std::cout << "enter the temperature in fahrenheit to convert to kelvins:";
        std::cin >> temp;

        temp = (temp - 32) * (5 / 9) + 273.15;
        std::cout << "temperature is:" << temp << "K\n";
    }
    else if ((unit == 'R' || unit =='r') && (f_unit == 'F' || f_unit == 'f'))
    {
        std::cout << "enter the temperature in fahrenheit to convert to rankine:";
        std::cin >> temp;

        temp = temp + 459.67;
        std::cout << "temperature is:" << temp << "K\n";
    }
    else{
        std::cout << "Enter valid unit\n";
    }
    /////////////////////////////////////////////////////////////////////////
    if ((unit == 'C' || unit == 'c') && (f_unit == 'K' || f_unit == 'k'))
    {
        std::cout << "enter the temperature in kelvins to convert to celcius:";
        std::cin >> temp;

        temp = temp - 273.15;
        std::cout << "temperature is:" << temp << "C\n";
    }
    else if ((unit == 'K' || unit == 'k') && (f_unit == 'K' || f_unit == 'k'))
    {
        std::cout << "enter the temperature in kelvins to convert to fahrenheit:";
        std::cin >> temp;

        temp = (temp - 273.15) * (5/9) + 32;
        std::cout << "temperature is:" << temp << "F\n";
    }
    else if ((unit == 'R' || unit =='r') && (f_unit == 'K' || f_unit == 'k'))
    {
        std::cout << "enter the temperature in kelvins to convert to rankine:";
        std::cin >> temp;

        temp = temp * (9 / 5);
        std::cout << "temperature is:" << temp << "K\n";
    }
    else{
        std::cout << "Enter valid unit\n";
    }
    /////////////////////////////////////////////////////////////////////////
    if ((unit == 'C' || unit == 'c') && (f_unit == 'R' || f_unit == 'r'))
    {
        std::cout << "enter the temperature in rankine to convert to celcius:";
        std::cin >> temp;

        temp = (temp - 491.67) * (5/9);
        std::cout << "temperature is:" << temp << "C\n";
    }
    else if ((unit == 'F' || unit == 'f') && (f_unit == 'R' || f_unit == 'r'))
    {
        std::cout << "enter the temperature in rankine to convert to fahrenheit:";
        std::cin >> temp;

        temp = temp + 459.67;
        std::cout << "temperature is:" << temp << "F\n";
    }
    else if ((unit == 'K' || unit =='k') && (f_unit == 'R' || f_unit == 'r'))
    {
        std::cout << "enter the temperature in rankine to convert to kelvins:";
        std::cin >> temp;

        temp = (temp - 491.67) / 1.79999999 + 273.15;
        std::cout << "temperature is:" << temp << "K\n";
    }
    else{
        std::cout << "Enter valid unit\n";
    }
    /////////////////////////////////////////////////////////////////////////
    
    std::cout << "***temperature conversion***";
    return 0;
}
