#include <iostream>
#include <cstdlib>
using std::cout, std::endl, std::size_t;


class String 
{
private:

    size_t mSize;
    size_t mCapacity;
    char* mpData;

public:


    String(const char* str) 
    {
        size_t i = 0;
        while (str[i] != '\0')
            i++;
        mSize = i;
        mCapacity = i + 1;

        mpData = (char*)std::malloc(sizeof(char) * mCapacity);

        for (size_t i = 0; str[i]; i++)
            mpData[i] = str[i];
        mpData[mSize] = '\0';
    }

    String() : String("") {}
    String(const String& s) : String(s.cStr()) {}

    String operator+(const String& b)
    {
        String result;

        result.mSize = mSize + b.mSize;
        result.mCapacity = result.mSize + 1;
        std::free(result.mpData);
        result.mpData = (char*)std::malloc(sizeof(char) * result.mCapacity);

        for (size_t i = 0; i < mSize; ++i)
            result.mpData[i] = mpData[i];

        for (size_t i = 0; i < b.mSize; ++i)
            result.mpData[mSize + i] = b.mpData[i];

        result.mpData[result.mSize] = '\0';

        return result;
    }


    ~String()
    {
        std::free(mpData);
    }


    size_t getSize()        const   {return mSize;}
    size_t getCapacity()    const   {return mCapacity;}
    const char* cStr()      const   {return mpData;}

    friend String operator+(const String& a, const String& b);
};


std::ostream& operator<<(std::ostream& left, const String& right) 
{
    left << right.cStr();
    return left;
}



int main() 
{
    String a = "Cat";
    String b = "Mouse";
    
    cout << a + b << endl;
}



