//Задание 2. Написать программу, которая выводит одномерный массив в обратном порядке.
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " | ";
    }
}
