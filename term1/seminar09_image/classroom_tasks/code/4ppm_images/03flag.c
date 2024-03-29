/*
    Создадим изображение побольше.

    В данном случае это будет изображение 600 на 400 пикселей, на котором будет изображён бело-сине-красный флаг.
    
    По сравнению с маленьким файлом тут добавиться 2 проблемы:

        1)  Где хранить цвета всех пикселей?

            Размер для хранения информации о всех пикселях теперь будет равен 600 * 400 * 3 байт = 720000 байт.
            Более того, в будущем мы бы хотели уметь хранить и очень большие изображение и изображения,
            чьи размеры мы заранее не знаем (например, если мы считываем какое-то изображение).

            Очевидно, что самым подходящим местом для хранения таких данных является куча.
            Поэтому выделяем необходимую информацию на куче вот так:

                unsigned char* data = (unsigned char*)malloc(sizeof(unsigned char) * 3 * width * height);

        
        2)  Компоненты цветов всех пикселей хранятся в виде одномерного массива в куче.
            В первых трёх байтах хранятся компоненты цвета первого пикселя (левого верхнего), в следующих трёх пикселях
            хранятся компоненты цвета второго пикселя (второй в верхней ряду) и так далее все пиксели ряд за рядом.

            Как найти компоненты пикселя, который находится на пересечении в i-го столбца и j-го ряда?
            (нумерация столбцов идёт слева направо, а нумерация рядов идёт сверх вниз).

            Можно показать, что пиксель с индексами (i, j) будет по очерёдности (j * width + i)-ым.
            Следовательно, компаненты цвета этого пикселя с индексами (i, j) это:

                data[3 * (j * width + i) + 0]    data[3 * (j * width + i) + 1]    data[3 * (j * width + i) + 2]    


    В этой программе, чтобы задать массив пикселей, мы в двумерном цикле проходим по всем пикселям картинки и
    задаём цвета пикселя (i, j) нужным образом.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int width = 600, height = 400;
    unsigned char* data = (unsigned char*)malloc(sizeof(unsigned char) * 3 * width * height);

    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            int id = j * width + i;
            if (j < height / 3)
            {
                data[3 * id + 0] = 255;
                data[3 * id + 1] = 255;
                data[3 * id + 2] = 255;
            }
            else if (j < 2 * height / 3)
            {
                data[3 * id + 0] = 1;
                data[3 * id + 1] = 141;
                data[3 * id + 2] = 233;
            }
            else
            {
                data[3 * id + 0] = 219;
                data[3 * id + 1] = 13;
                data[3 * id + 2] = 32;
            }
        }
    }

    FILE* file = fopen("flag.ppm", "wb");

    fprintf(file, "P6\n%i %i\n255\n", width, height);

    fwrite(data, 1, 3 * height * width, file);

    fclose(file);
    free(data);
}