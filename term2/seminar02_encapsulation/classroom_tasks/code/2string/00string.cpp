/*
    Создадим свою строку

    Один из самых главных недостатков языка C это работа со строками.
    Строки в языке C это просто массивы элементов типа char:

        char str[100];    или   char* p = malloc(100);


    В языке C работать со строками очень неудобно по многим причинам:

        -   Нужно постоянно следить за тем, чтобы строка умещалась в памяти, которая под нею выделена.

        -   Строку можно выделить на Стеке, используя обычный массив, и тогда её вместимость нельзя будет увеличить,
            а можно выделить в Куче, но тогда придётся самостоятельно выделять и освобождать память и следить, чтобы
            не произошли утечки памяти.

        -   Строки нельзя просто копировать, сравнивать, складывать и т. д. Для этого нужно использовать специальные 
            функции типа strcpy и другие функции из библиотеки <string.h>.


    Создадим же удобный класс строки. Такой чтобы можно было удобно создавать строки, приравнивать, складывать и т. д.
    Не заботясь о выделении/удалении памяти, и о том, что строка помещается в выделенную память.

    Чтобы можно было писать, например, вот такой код:
    
        String a = "Cat";
        String b = "Dog";
        cout << a << " " << b << endl;

        String c = "Mouse";
        c = a + b;
        c += "Bear";
        
        if (c == "CatDogBear")
            cout << "Yes" << endl;
        
        c = a;
        cout << c << endl;


    (String в переводе с английского это Строка)
*/




int main() {}

