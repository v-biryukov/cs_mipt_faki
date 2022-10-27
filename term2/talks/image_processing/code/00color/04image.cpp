/*
    Хранение изображения в памяти

    Для изображения нужно хранить в памяти:

        1)  Ширину изображения в пикселях
        2)  Высоту изображения в пикселях
        3)  Массив, содержащий цвета каждого пикселя

    В этом примере мы храним изображение размером 3 на 2 пикселя и следующими компонентами цветов пикселей:

            ╔═════════════╤══════════════╤═════════════╗
            ║             │              │             ║
            ║             │              │             ║
            ║ 109, 53, 35 │ 116, 116, 94 │ 52, 72, 49  ║
            ║             │              │             ║
            ║             │              │             ║
            ╟─────────────┼──────────────┼─────────────╢
            ║             │              │             ║
            ║             │              │             ║
            ║ 40, 41, 95  │  43, 124, 53 │ 58, 34, 60  ║
            ║             │              │             ║
            ║             │              │             ║
            ╚═════════════╧══════════════╧═════════════╝


    Для хранения компонент мы заводим массив и храним компоненты в следующем порядке:
    
        {109, 53, 35, 116, 116, 94, 52, 72, 49, 40, 41, 95, 43, 124, 53, 58, 34, 60};

*/

#include <iostream>

int main()
{
    const int width = 3;
    const int height = 2;

    unsigned char[18] data {109, 53, 35, 116, 116, 94, 
                            52, 72, 49, 40, 41, 95,
                            43, 124, 53, 58, 34, 60};
}