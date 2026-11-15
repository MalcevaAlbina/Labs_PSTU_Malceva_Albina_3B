#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;


float logarifm(float x)// Перегрузка 1: принимает float
{
    return log(x);// Возвращает натуральный логарифм
}
double logarifm(double x)// Перегрузка 2: принимает double
{
    return log(x);// Возвращает натуральный логарифм
}
float logarifm10(float x)// Перегрузка 1 для lg: принимает float
{
    return log10(x);// Возвращает десятичный логарифм
}

double logarifm10(double x)// Перегрузка 2 для lg: принимает double
{
    return log10(x);// Возвращает десятичный логарифм
}

int main()
{
    setlocale(LC_ALL, "RU");
    float a;
    double b;
    cout << "Введите число для натурального логарифма: ";
    cin >> a;
    cout << "Введите число для десятичного логарифма: ";
    cin >> b;
    if (a > 0)
        cout << "Натуральный логарифм: " << logarifm(a) << endl;
    else                         
        cout << "Число для натурального логарифма должно быть больше нуля" << endl;

    if (b > 0)        
        cout << "Десятичный логарифм: " << logarifm10(b) << endl;
    else        
        cout << "Число для десятичного логарифма должно быть больше нуля" << endl;

    return 0;                  
}