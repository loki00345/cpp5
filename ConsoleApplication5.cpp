#include <iostream>
#include <ctime>
using namespace std;

int main() /*{
    const int SIZE = 10;
    int numbers[SIZE];
    srand(time(nullptr));
    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = rand() % 100;
    }

    cout << "elements:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int min = numbers[0];
    int max = numbers[0];
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "min element: " << min << endl;
    cout << "max element: " << max << endl;*/

    {
        const int months = 12;
        int profits[months];

        cout << "Enter the profit for each month:\n";
        for (int i = 0; i < months; ++i) {
            cout << "month " << i + 1 << ": ";
            cin >> profits[i];
        }

        int start_month, end_month;

        cout << "Enter the start and end months of the range: ";
        cin >> start_month >> end_month;


        if (start_month < 1 || end_month > months || start_month > end_month) {
            cout << "Invalid range!\n";
            return 1;
        }
        int max_profit = profits[start_month - 1], min_profit = profits[start_month - 1];
        int max_month = start_month, min_month = start_month;

        for (int i = start_month - 1; i < end_month; ++i) {
            if (profits[i] > max_profit) {
                max_profit = profits[i];
                max_month = i + 1;
            }
            if (profits[i] < min_profit) {
                min_profit = profits[i];
                min_month = i + 1;
            }
        }
        cout << "The month with maximum profit: " << max_month << endl;
        cout << "A month with minimal profit: " << min_month << endl;

    }


