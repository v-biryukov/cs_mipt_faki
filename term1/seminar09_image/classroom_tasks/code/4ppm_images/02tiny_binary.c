/*
    Формат PPM. Бинарный вариант формата.

    
    Хранение изображения в текстовом формате имеет преемущество в том, что изображение можно открыть
    в любом текстовом файле. Это может быть полезно, например, при поиске багов.

    Однако у такого файла имеется недостаток - такие файлы требуют гораздо больше информации для 
    хранения такого - же количества информации.
    Например, чтобы указать, что один из пикселей имеет белый цвет нужно написать в файле:

        255 255 255

    получается 12 символов (с учетом переноса строки).
    Соответственно нужно 12 байт, чтобы сохранить информацию о пикселе белого цвета.
    В бинарном же файле мы могли бы использовать всего 3 байта. Каждый байт бы хранил значение 255. 
    
    
    Если мы хотим создать картинку формата PPM размера 3 на 2 пикселя и цветами пикселей:
    красный, зелёный, синий в верхнем ряду и белый, черный и серый в нижнем ряду, то такой файл 
    в текстовом формате будет выглядеть так:

        P6
        3 2
        255
        <тут идут 18 байт, информация о пикселях>

    где

        P6      -   означает формат файла PPM, 6-й вариант
        3 2     -   размеры изображения
        255     -   максимальное значение компаненты цвета каждого пикселя
        Эти первые три строки содержат общую информацию об изображении. Это заголовок файла.
        Интересно, что даже в бинарном файле, заголовок записывается текстом. Это особенность формата PPM.

        Дальше идут 18 байт. В них хранятся значения rgb компонент цвета каждого пикселя. 
        Первые 3 байта задают цвет первого пикселя (верхнего левого), следующие 3 байта задают цвет
        второго пикселя (второй пиксель в верхнем ряду) и так далее.

    
    Дополнение. Варианты форматов PPM файлов:

        P1  -   картинка, состоящая из 2-х цветов (черный и белый), текстовый файл
        P2  -   картинка, состоящая только из градаций серого (256 цветов), текстовый файл
        P3  -   цветная картина (256^3 цветов), текстовый файл
        P4  -   картинка, состоящая из 2-х цветов (черный и белый), бинарный файл
        P5  -   картинка, состоящая только из градаций серого (256 цветов), бинарный файл
        P6  -   цветная картина (256^3 цветов), бинарный файл
    

    В данной программе мы создаём картинку в бинарном формате PPM.
    Картинка такая же, что и в предыдущих примерах.
    Для того, чтобы записать сразу весь массив цветов пикселей в файл используем функцию fwrite.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char data[18] = 
    {
        255, 0,   0, 
        0,   255, 0,
        0,   255, 0,
        255, 255, 255,
        0,   0,   0,
        100, 100, 100
    };


    FILE* fb = fopen("tiny_binary.ppm", "wb");

    fprintf(fb, "P6\n%i %i\n255\n", 3, 2);

    fwrite(data, 1, 18, fb);

    fclose(fb);
}


/*
    Задача

        Скомпилируйте эту программу и запустите.
        Откройте файл tiny_binary.ppm с помощью редактора IrfanView.
        Просмотрите байты файлов tiny_text.ppm и tiny_binary.ppm с помощью утилиты xxd:

            xxd tiny_binary.ppm
*/

