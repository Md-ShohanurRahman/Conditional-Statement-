#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    string status = (age >= 18) ? "Adult" : "Minor";

    cout << "You are an " << status << endl;

    return 0;
}