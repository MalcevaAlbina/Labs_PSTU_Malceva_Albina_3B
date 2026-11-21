#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int n, m;
    cout << "Введите строки и столбцы: ";
    cin >> n >> m;

    // Создаем матрицу
    int** a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    // Заполняем и ищем минимум
    int min = 9999;
    int min_i = 0;
    int min_j = 0;

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
            if (a[i][j] < min) {
                min = a[i][j];
                min_i = i;
                min_j = j;
            }
        }
        cout << endl;
    }

    cout << "Минимум: " << min << " (строка " << min_i << ", столбец " << min_j << ")" << endl;

    // Создаем новую матрицу (на 1 меньше)
    int** b = new int* [n - 1];
    for (int i = 0; i < n - 1; i++) {
        b[i] = new int[m - 1];
    }

    // Копируем элементы, пропуская нужную строку и столбец
    int new_i = 0;
    for (int i = 0; i < n; i++) {
        if (i == min_i) {
            continue; // Пропускаем строку
        }
        int new_j = 0;
        for (int j = 0; j < m; j++) {
            if (j == min_j) {
                continue; // Пропускаем столбец
            }
            b[new_i][new_j] = a[i][j];
            new_j++;
        }
        new_i++;
    }

    // Выводим результат
    cout << "Новая матрица:" << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    // Удаляем память
    for (int i = 0; i < n; i++) delete[] a[i];
    delete[] a;

    for (int i = 0; i < n - 1; i++) delete[] b[i];
    delete[] b;

    return 0;
}