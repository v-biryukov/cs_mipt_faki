/*
    Small String Optimization (SSO)

    На самом деле строка std::string устроена значительно хитрее, чем строка, которую мы писали на
    прошлом семинаре. В ней есть оптимизация, которая позволяет быстро работать с маленькими строками.

    Если строка маленькая, то наша строка String всё равно вызывала malloc и выделяла/освобождала память под неё. 
    Даже если строка пустая и нам нужно хранить только один байт(\0) в самой строке, то мы всё-равно выделяли этот байт в куче.
    Выделение памяти в куче это не очень быстрый процесс, и нам бы хотелось, чтобы такие операции происходили как можно реже.
    
    Small String Optimization заключается в том, что мы храним строку, если она маленькая, прямо в самом объекте.
    При этом память на строку в куче вообще не выделяется.
    Есть много вариантов как это сделать. Один из распространённых вариантов выглядит так:


        class mystring
        {
        private:
            char* mpData;
            size_t mSize;
            size_t mCapacity;
        }

        class string
        {
        private:
            char* mpData;
            size_t mSize;
            union
            {
                size_t mCapacity;
                char mSsoBuffer[16];
            };

            // ...
        }


    Давайте посмотрим как устроена память объекта std::string.
    Для этого напишем функцию printBytes, которая будет расечатывать побайтово память объекта строки.
    Каждый байт распечатывается как число в 16-ричном виде и как ASCII-символ (непечатаемые символы заменены на '_').
    Видно, что строка Cat полностью содержится в самом объекте, а не хранится в Куче.
*/

#include <iostream>
#include <iomanip>
#include <string>
using std::cout, std::endl;

void printBytes(std::string& str)
{
    using std::cout, std::endl, std::hex, std::dec, std::setw;
    unsigned char* p = (unsigned char*)&str;

    for (int i = 0; i < sizeof(std::string); ++i)
    {
        cout << hex << setw(2) << (int)p[i] << dec << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(std::string); ++i)
    {
        if (p[i] < 32 || p[i] > 126)
            cout << setw(2) << "_" << " ";
        else
            cout << setw(2) << p[i] << " ";
    }
    cout << endl;
}


int main()
{

    std::string a("Cat");

    std::string b("A long time ago in a galaxy far, far away....");

    cout << "string a:" << endl;
    printBytes(a);

    cout << endl;
    cout << "string b:" << endl;
    printBytes(b);
}


/*
    Задачи:

    1)  Чему равен размер структуры std::string на вашей системе?

    2)  Экспериментально найдите максимальный размер строки, которая ещё хранится самом объекте строки,
        а не в Куче. В зависимости от компилятора это число может различаться.
*/