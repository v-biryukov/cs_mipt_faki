/*
    В данной программе мы считываем содержимое файлов actors.csv и movies.csv в одну структуру MovieDatabase.
    Структура MovieDatabase это примитивная база данных, в которой хранятся данные о фильмах и актёрах.
    
    Структура Actor состоит из следующих полей:

        1)  name        - имя актёра
        2)  surname     - фамилия актёра
        3)  gender      - пол, 0 - мужской, 1 - женский (тут можно было использовать enum)
        4)  height      - высота актёра в сантиметрах
        5)  birth_date  - дата рождения, структура, которая состоит из трёх полей типа int
        6)  birth_address - место рождения, структура, которая состоит из трёх полей - строк.


    Структура Movie состоит из следующих полей:

        1)  title        - название фильма
        2)  release_date - дата выхода, структура типа Date
        3)  rating       - рейтинг фильма, число от 0 до 10
        4)  crew_size    - количество актёров, сыгравших в фильме
        5)  crew         - массив, содержащий индексы актёров из массива, в котором хранятся актёры

    Структура MovieDatabse состоит из следующих полей:

        1)  number_of_movies    - количество фильмов в базе
        2)  movies              - массив фильмов
        3)  number_of_actors    - количество актёров в базе
        4)  actors              - массив актёров


    Были написаны функции для работы с этими структурами:

        read_actors_from_file:

            Эта функция принимает на вход название файла и указатель на первый элемент массива структур Actor.
            При этом подразумевается, что массив достаточно большой, чтобы сохранить всех актёров из файла.
            Функция считывает всех актёров из файла в массив и возвращает количество считанных актёров.


        read_movies_from_file:

            Эта функция принимает на вход название файла и указатель на первый элемент массива структур Movie.
            При этом подразумевается, что массив достаточно большой, чтобы сохранить все фильмы из файла.
            Функция считывает все фильмы из файла в массив и возвращает количество считанных фильмов.


        read_database:

            Эта функция принимает на вход названия файлов в
*/


#include <stdio.h>
#include <string.h>

struct date
{
    int day, month, year;
};
typedef struct date Date;


struct address
{
    char country[12];
    char region[52];
    char city[32];
};
typedef struct address Address;


struct actor
{
    char name[32];
    char surname[32];
    int gender;
    int height;
    Date birth_date;
    Address birth_address;
};
typedef struct actor Actor;


struct movie
{
    char title[50];
    Date release_date;
    double rating;

    int crew_size;
    int crew[20];
};
typedef struct movie Movie;


struct movie_database
{
    int number_of_movies;
    Movie movies[5000];

    int number_of_actors;
    Actor actors[5000];
};
typedef struct movie_database MovieDatabase;



int read_actors_from_file(const char* filename, Actor* actors)
{
    FILE* fin = fopen(filename, "r");
    int number_of_actors;
    fscanf(fin, "%d", &number_of_actors);

    for (int i = 0; i < number_of_actors; ++i)
    {
        fscanf(fin, "%[^,],%[^,],%d,%d,%d/%d/%d,%[^,],%[^,],%[^\n]\n",
            actors[i].name, actors[i].surname, &actors[i].gender, &actors[i].height,
            &actors[i].birth_date.day, &actors[i].birth_date.month, &actors[i].birth_date.year, 
            actors[i].birth_address.country, actors[i].birth_address.region, actors[i].birth_address.city);
    }
    fclose(fin);
    return number_of_actors;
}

int read_movies_from_file(const char* filename, Movie* movies)
{
    FILE* fin = fopen(filename, "r");
    int number_of_movies;
    fscanf(fin, "%d", &number_of_movies);
    for (int i = 0; i < number_of_movies; ++i)
    {
        
        fscanf(fin, "%[^,],%d/%d/%d,%lf,%d,", movies[i].title, &movies[i].release_date.day, 
            &movies[i].release_date.month, &movies[i].release_date.year, &movies[i].rating, &movies[i].crew_size);
        for (int j = 0; j < movies[i].crew_size; ++j)
        {
            fscanf(fin, "%d", &movies[i].crew[j]);
        }
    }
    fclose(fin);
    return number_of_movies;
}

// Считываем все данные из файлов в структуру типа MovieDatabase,
// которая содержится по адресу pmd (сокр. от Pointer to Movie Database)
void read_database(MovieDatabase* pmd, const char* actors_file_name, const char* movies_file_name)
{
    pmd->number_of_actors = read_actors_from_file(actors_file_name, pmd->actors);
    pmd->number_of_movies = read_movies_from_file(movies_file_name, pmd->movies);
}


// Функция, которая печатает информацию об одном актере в поток stream
// stream может быть или файлом или stdout
void print_actor(FILE* stream, const Actor* a)
{
    fprintf(stream, "%10s %15s. Height: %d cm. Birth date: %02d/%02d/%d. Birth Address: %s, %s, %s\n", a->name, a->surname,
           a->height, a->birth_date.day, a->birth_date.month, a->birth_date.year, 
           a->birth_address.country, a->birth_address.region, a->birth_address.city);
}

// Функция, которая печатает информацию об одном фильме в поток stream
// stream может быть или файлом или stdout
void print_movie(FILE* stream, const Movie* a)
{
    fprintf(stream, "%20s. Rating: %.3lf. Release date: %02d/%02d/%d.\n", a->title, a->rating,
            a->release_date.day, a->release_date.month, a->release_date.year);
}

// Печатает информацию о фильме под номером movie_id (номер в массиве movies структуры md)
// Кроме информации о самом фильме, печатает также всех актёров 
void print_movie_descriptive(FILE* stream, const MovieDatabase* pmd, int movie_id)
{
    print_movie(stdout, &pmd->movies[movie_id]);
    printf("Actors:\n");
    for (int i = 0; i < pmd->movies[movie_id].crew_size; ++i)
    {
        printf("\t");
        print_actor(stdout, &pmd->actors[pmd->movies[movie_id].crew[i]]);
    }
    printf("\n");
}


int main()
{
    MovieDatabase md;
    printf("%llu\n", sizeof(md));
    read_database(&md, "actors.csv", "movies.csv");
    while (1)
    {
        printf("Enter movie id (no more than 4000):\n");
        int id;
        scanf("%d", &id);
        print_movie_descriptive(stdout, &md, id);
    }
}