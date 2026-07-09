#include <iostream>  
#include <string>   
using namespace std;  


int ReadPositiveNumber(string Message)
{
    int Number = 0; 

    do
    {
        cout << Message << endl; 
        cin >> Number;           
    } while (Number <= 0);       

    return Number;
}


int CountDigitFrequency(short DigitToCheck , int Number )
{
    int FreqCount = 0, Remainder = 0; 
     

    while (Number > 0)
    {
        Remainder = Number % 10; 
        Number = Number / 10;
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;

}

void PrintAllDigitFrequnce(int Number)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequnce is : "
                << DigitFrequency << " Time is \n";
        }
    }
}
    
int main()
{
    int Number = ReadPositiveNumber("Please enter the a number?");
    PrintAllDigitFrequnce(Number);
    return 0; 
}
