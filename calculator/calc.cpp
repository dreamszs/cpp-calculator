#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main() {
    int Num = 0;
    int Num1 = 0;
    std::string Option = "";
    

    cout << "Basic Calculator made by billybobjo on github" << std::endl;
    
    // Use cout to prompt the user, then use cin to take input
    cout << "Pick A Starting Number: ";
    cin >> Num;

    cout << "Pick A Second Number: ";
    cin >> Num1;

    int Adding = Num + Num1;
    int Subtract = Num - Num1;
    int Divide = Num / Num1;
    int Multiply = Num * Num1;

    cout << "You Picked: " << Num << "\n" << Num1 << "\n" << "Would You Like to Add, Subtract, or Divide?" << std::endl;
    cout << "Type Add to add numbers, Type Subtract to subtract the numbers, Type Divide to Divide the numbers, and finally type multiplication to Multiply " << std::endl;
    cin >> Option;

    if (Option == "Add")
    {
        cout << Adding;
    }
    
    if (Option == "Subtract") 
    {
        cout << Subtract;
    }

    if (Option == "Divide")
    {
        cout << Divide;
    }

    if (Option == "Multiply")
    {
        cout << Multiply;
    }
    
    

    return 0;
}
