#include <stdio.h>

/*
    Функция sscanf работает похоже на scanf, но только считывает данные
    не из стандартного входа, а из строки.

    С её помощью можно конвертировать числа из строки в числа
*/


int main() {
    char str[20] = "5-10-1872";
    int day, month, year;

    // Считываем числа из строки
    sscanf(str, "%d-%d-%d", &day, &month, &year);

    printf("Day: %d. Month: %d. Year: %d.\n", day, month, year);

    // Аналогично -- sprintf(строка, <то же самое, что и в printf>)
}


/*
    Пусть есть строки:
        char str1[10] = "79";
        char str2[10] = "435";

    Используйте sscanf, чтобы конвертировать эти строки в числа 79 и 435 соответственно

*/