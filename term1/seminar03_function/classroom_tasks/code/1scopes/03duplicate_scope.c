/*
    Но можно создать несколько переменных с одинаковым именем в разных областях видимости,
    в том числе внутри вложенной области видимости.

    В этом случае внутри вложенной области видимости будет создана новая переменная с тем же названием,
    а при попытке доступа к переменной, будет учитываться то в какой области видимости была создана переменная.

    Название новой переменной как бы перекрывает название старой переменной.
*/


#include <stdio.h>



int main()
{
    int a = 10;
    
    if (1)
    {
        int a = 20;
        printf("%i\n", a);
    }

    printf("%i\n", a);
}


/*
    Задачи:

        1)  Что напечатает данная программа?
            Скомпилируйте программу и запустите, чтобы проверить себя.

        2)  Что напечатает следующая программа?
            
            #include <stdio.h>
            int main()
            {
                int a = 10;
                
                if (1)
                {
                    printf("%i\n", a);
                    int a = 20;
                    printf("%i\n", a);
                }

                printf("%i\n", a);
            }


        3)  Что напечатает следующая программа?
            
            #include <stdio.h>
            int main()
            {
                int a = 10;
                
                if (1)
                {
                    int a = 20;
                    a += 5;

                    printf("%i\n", a);
                }

                printf("%i\n", a);
            }
*/