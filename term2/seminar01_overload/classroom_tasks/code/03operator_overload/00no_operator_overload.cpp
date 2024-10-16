/*
    Добавление времени без использования перегрузки операторов

    Предположим, что мы захотели создать структуру, который будет хранить время (для простоты, только минуты и секунды).
    Нам может понадобиться функция, которая будет добавлять ко времени, некоторое количество секунд.
    В данном примере написана функция add, которая это делает.

*/

#include <iostream>
using std::cout, std::endl;


struct Time 
{
    int minutes;
    int seconds;
};


Time add(Time t, int x)
{
    Time result = t;
    result.seconds += x;
    
    result.minutes += (result.seconds / 60);
    result.seconds %= 60;

    return result;
}


int main() 
{
    Time a = {20, 10};
    Time b = add(a, 90);

    cout << b.minutes << " " << b.seconds << endl;
}


/*

    Задача:
        
        Напишите функцию-перегрузку add, которая будет складывать не время и число, а два времени:

            Time add(Time ta, Time tb)

*/