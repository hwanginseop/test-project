#include <iostream>
#include <string>
#include <limits>
using namespace std;

template<typename T>
void printMinMax()
{
    cout << numeric_limits<T>::min() << " " << numeric_limits<T>::max() << "\n";
}

int main()
{
    string input;
    int count_char = 0, count_int = 0, count_long = 0, count_float = 0, count_double = 0;

    while (true)
    {
        cout << "타입 이름을 입력하세요. 종료하려면 'quit'을 입력하세요: ";
        cin >> input;

        for (char& c : input)
        {
            c = tolower(c);
        }

        if (input == "char")
        {
            printMinMax<char>();
            count_char += 1;
        }

        else if (input == "int")
        {
            printMinMax<int>();
            count_int += 1;
        }

        else if (input == "long")
        {
            printMinMax<long>();
            count_long += 1;
        }

        else if (input == "float")
        {
            printMinMax<float>();
            count_float += 1;
        }

        else if (input == "double")
        {
            printMinMax<double>();
            count_double += 1;
        }

        else if (input == "quit")
        {
            cout << "===A List of # of type===" << "\n" << "int:" << count_int << "\n" << "long:" << count_long << "\n" << "float:" << count_float << "\n" << "double:" << count_double << "\n" << "char:" << count_char;
            break;
        }

        else
        {
            cout << "올바른 타입 이름을 입력하세요." << "\n";
        }
    }
}