/*
    Типичные ошибки, которые могут возникнуть при решении задач этого семинара.

    Много ошибок возникают у студентов при работе с Терминалом при компиляции и запуске программы.
    Последовательность действий для компиляции должна быть такая:

        1)  Отредактировать файл исходного кода
        2)  Сохранить файл
        3)  Скомпилировать файл в терминале с помощью gcc

                gcc имя_файла.c

        4)  Запустить программу

                ./a.out     (Linux)     или       a.exe    (Windows)



    Вот какие ошибки могут возникать при этом:

        1)  Вы находитесь не в той папке

            Предположим, что у вас есть 2 папки, которые содержат файл с одинаковым именем

                .../first/hello.c      и      .../second/hello.c

            Вы редактируете файл, который находится в папке first, а компилируете файл, который находится в папке second.
            Естественно, в этом случае никаких изменений работы программы вы не увидите.

            Чтобы понять в какой папке вы находитесь в Терминале можно использовать команду 

                  pwd       (Linux)     или        cd      (Windows)


        2)  Компилируете не тот файл

            Предположим у вас в папке лежат 2 файла:

                hello.c      и     helo.c

            Ошибка может быть в том, что вы редактируете один файл, а компилируете другой.


        3)  Забыли сохранить файл

            Вот вы изменили файл программы, скомпилировали, запустили, но поведение программы не изменилось.
            Возможно вы просто забыли сохранить файл исходного кода и компилируете старую версию этого файла.

            Не забывайте сохранять файл после каждого изменения.


        4)  Забыли скомпилировать

            Вы запускаете программу и видите, что поведение программы не изменилось.
            Возможно вы просто забыли скомпилировать программу, то есть написать

                gcc имя_файла.c

            Поэтому когда вы запускаете программу командой

                ./a.out

            то запускается программа, котороя была скомпилирована в прошлый раз.
*/

int main()
{
}