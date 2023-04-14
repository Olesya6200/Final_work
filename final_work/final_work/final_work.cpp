#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    string* string_arr = new string[n];
    cout << "Введите строки: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> string_arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (string_arr[i].length() <= 3) {
            count++;
        }
    }

    string* result = new string[count];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (string_arr[i].length() <= 3) {
            result[index] = string_arr[i];
            index++;
        }
    }

    cout << "Результат: " << endl;
    for (int i = 0; i < count; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
