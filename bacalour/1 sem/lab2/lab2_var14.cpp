#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double e = 0.0001;
    int n = 1;
    double a_n = 1.0 / 3.0; //a_1 = 1! / (3 * 1^1) = 1/3
    double a_n1;
    double sum = a_n;//Начальная сумма
    while (fabs(a_n) >= e)
    {
        // Вычисляем следующий член по рекуррентной формуле
        a_n1 = a_n * pow((double)n / (n + 1.0), n);
        // Добавляем следующий член к сумме
        sum += a_n1;
        // Переходим к следующему шагу (этот член становится текущим)
        a_n = a_n1;   
        //Увеличиваем счетчик шагов
        n++;                     
    }
    // Вывод результата
    cout << "Сумма ряда: " << sum;
    return 0;
}