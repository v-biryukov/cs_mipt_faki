/*
    Одно из применений typedef

    Предположим, что вы решили написать программу, которая будет производить множество операций с вещественными числами 
    (например, математическую библиотеку). 
    У вас есть выбор: использовать в этой библиотеке тип float или тип double. 
    Если выбрать тип float, то потребление памяти будет в 2 раза меньше, но вычисления будут не такими точными. 
    Если же выбрать тип double, то получится обратная ситуация. 

    Что бы мы ни выбрали, поменять один тип на другой, когда программа уже написана, может быть проблематично. 
    Эту проблему можно решить с помощью typedef. Просто пишем в начале программы:
    
        typedef double real;
    
    А затем везде в программе используем real. При необходимости можно быстро поменять тип.
*/

int main() {}