
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// FILE_LINE_LENGTH -- максимальная длина строки в файле
#define FILE_LINE_LENGTH 300

typedef struct player
{
	char surname[50];
	char name[50];
	char position;
	int start_year;
	int finish_year;
} Player;

// Функция, которая считывает всех игроков из файла file_name
// и записывает всё в массив players
// file_name -- имя файла, который нужно открыть
// pointer_to_players -- указатель на указатель на 1-й элемент динамичекого массива
// 		память под этот массив нужно выделить с помощью malloc
//      указатель на указатель нужен потому, что мы хотим присвоить новое значение передаваемому указателю
//      если бы мы передавали просто указатель вот так: Player * players;
//      и потом бы присволи ему что-нибудь: players = (...) malloc(...);
//		то, из-за передачи указателя в функцию по значению, его значение было бы другим вне функции
// Функция возвращает число элементов динамического массива
int read_players_from_file(char * file_name, Player ** pointer_to_players)
{
	// Открываем файл
	FILE * f = fopen(file_name, "r");
	// Проверяем на ошибки открытия
	if ( f == NULL )
	{
		printf( "Error while opening file\n" );
		fclose (f);
		exit(1);
	}
	// Разделители между словами: пробел, запятая и знак табуляци(т.е. TAB -- '\t')
	char delimiters[4] = ", \t\n";
	// Строка, куда мы будем поочерёдно записывать строки из файла
	char line[FILE_LINE_LENGTH];
	// С указателя token мы указываем на текущее "слово"
	// "Слово" -- это любая комбинация символ между разделителями
	char *token;
	
	// Получаем общее число игроков, которых нужно считать из файла
	// Считываем 1-ю строку, в ней хранится число
	fgets(line, FILE_LINE_LENGTH, f);
	int total_number_of_players;
	sscanf(line, "%d", &total_number_of_players);
	
	// Теперь нужно выделить память на массив players с помощью malloc:
	// Допишите код здесь:
	// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

	// *pointer_to_players =  ... malloc (...); //выделить место под массив из структур Player размером total_number_of_players элементов используя malloc
	
	// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	// Для удобства введём переменную, указатель на 1-й элемент выделенного массива
	// Теперь с players можно обращаться какс обычным массивом
	Player * players = *pointer_to_players;
	
	// Читаем строки поочерёдно total_number_of_players раз
	int i;
	for ( i = 0; i < total_number_of_players; ++i )
	{
		// Номер текущей считываемой строки = i
		// То есть текущий игрок это players[i]
		// Значит нам нужно заполнить все поля этого игрока: players[i].surname, players[i].name, players[i].start_year и т. д.
		
		fgets(line, FILE_LINE_LENGTH, f);            // Считываем строку

		token = strtok(line, delimiters);            // Парсим первое "слово" из строки line -- это фамилия
		strcpy(players[i].surname, token);           // Копируем имя команды в нужное место в массиве matches
		token = strtok(NULL, delimiters);            // Парсим второе "слово" из строки line -- это имя. NULL означает, что мы считываем из той же строки 
		strcpy(players[i].name, token);              // Копируем имя команды в нужное место в массиве matches
		fgets(line, FILE_LINE_LENGTH, f);            // Считываем следующую строку

		token = strtok(line, delimiters);            // Парсим первое "слово" из второй строки line -- это год начала карьеры в виде строки, т.е., например, token == "1984"
		sscanf(token, "%d", &players[i].start_year);  // Сохраняем это число в players[i].start_year
		// Вам нужно:
		// 1) Распарсить год окончания
		// 2) Распарсить позицию	
		// Допишите код здесь:
		// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
		






		// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		
		// Можно распечатать полученных игроков, для тестирования
		printf("%s %s %d\n", players[i].surname, players[i].name, players[i].start_year);
		
		// Переходим к следующей строке (т.е. к следующему игроку)
	}
	// Закрываем файл
	fclose(f);
	// Возвращаем число элементов динамического массива
	return total_number_of_players;
}



int main()
{
	char * fname = "players.txt";                                            // Имя файла
	Player * all_players;                                                    // Указатель на 1-й элемент будущего динамического массива
	int total_number_of_players;                                             // Размер будущего динамического массива

	total_number_of_players = read_players_from_file(fname, &all_players);   // Считываем данные из файла
                                                                             //     и присваиваем переменной total_number_of_players значение - размер массива
	
	// Теперь, когда все данные считаны, вам нужно:
	// 1) Отсортиротировать массив по позиции игрока используя qsort
	// 2) Вывести его в файл или на экран
	// 3) Попробовать реализовать функцию сортировки за линейное время
	// 4) Освободить использованную память с помощью free
	// Допишите код здесь:
	// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

	






	// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||



	return 0;
}

