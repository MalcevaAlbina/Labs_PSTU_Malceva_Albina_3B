#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
void natural_log(int n, float a[])   // Принимает размер n и массив float
{
    cout << "Натуральные логарифмы (float):" << endl;
    for (int i = 0; i < n; i++)// Проходим по всем n элементам массива
    {
        cout << "ln(" << a[i] << ") = " << log(a[i]) << endl;
    }
}
//вычисляет натуральный логарифм для массива типа double
void natural_log(int n, double a[]) // Принимает размер n и массив double
{
    cout << "Натуральные логарифмы (double):" << endl;
    for (int i = 0; i < n; i++)// Проходим по всем n элементам массива
    {
        cout << "ln(" << a[i] << ") = " << log(a[i]) << endl; // Печатаем ln(a[i]) через функцию log()
    }
}
//вычисляет десятичный логарифм для массива типа float
void decimal_log(int n, float a[])// Принимает размер n и массив float
{
    cout << "Десятичные логарифмы (float):" << endl; // Печатаем заголовок
    for (int i = 0; i < n; i++)// Проходим по всем n элементам массива
    {
        cout << "lg(" << a[i] << ") = " << log10(a[i]) << endl; // Печатаем lg(a[i]) через функцию log10()
    }
}
//вычисляет десятичный логарифм для массива типа double
void decimal_log(int n, double a[])// Принимает размер n и массив double
{
    cout << "Десятичные логарифмы (double):" << endl;
    for (int i = 0; i < n; i++)// Проходим по всем n элементам массива
    {
        cout << "lg(" << a[i] << ") = " << log10(a[i]) << endl; // Печатаем lg(a[i]) через функцию log10()
    }
}
int main()
{
    
    setlocale(LC_ALL, "RU");
    float mas_float[] = { 1.0, 2.5, 10.0 };       // Объявляем массив типа float с тремя значениями
    double mas_double[] = { 1.0, 100.0, 1000.0 }; // Объявляем массив типа double с тремя значениями

    natural_log(3, mas_float); // Вызываем natural_log для float (компилятор выберет версию с float)
    cout << endl;                    
    natural_log(3, mas_double);// Вызываем natural_log для double (компилятор выберет версию с double)
    cout << endl;                   
    decimal_log(3, mas_float);// Вызываем decimal_log для float (компилятор выберет версию с float)
    cout << endl;                    
    decimal_log(3, mas_double); // Вызываем decimal_log для double (компилятор выберет версию с double)
    return 0;                       
}
