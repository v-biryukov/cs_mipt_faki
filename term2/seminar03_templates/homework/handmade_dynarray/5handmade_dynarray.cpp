#include <iostream>
#include <algorithm>
#include <string>

template <typename T>
struct Dynarray
{
private:
	size_t size;
	size_t capacity;
	T* values;

public:
	Dynarray(size_t initial_capacity)
	{
		if (initial_capacity < 0)
		{
			std::cout << "Dynarray's capacity has to be non-negative integer\n";
			exit(1);
		}
		size = 0;
		capacity = initial_capacity;
		values = new T[capacity];
	}

	Dynarray() : Dynarray(0)
	{
	}

	void push_back(T x)
	{
		if (size >= capacity)
		{
			if (capacity == 0)
				capacity = 1;
			else
				capacity *= 2;

			T* temp = new T[capacity];
			std::copy_n(values, size, temp);
			delete[] values;
			values = temp;
		}
		values[size] = x;
		size += 1;
	}

	void erase(size_t id)
	{
		if (id < 0 || id >= size)
		{
			std::cout << "Error while erasing element from Dynarray! Index is out of range\n";
			exit(1);
		}
		if (size == 0)
		{
			std::cout << "Error while erasing element from Dynarray! Dynarray is empty\n";
			exit(1);
		}
		for (size_t i = id; i < size - 1; i++)
			values[i] = values[i + 1];
		size--;
	}

	int is_empty() const
	{
		return (size == 0);
	}

	size_t get_size() const
	{
		return size;
	}

	size_t get_capacity() const
	{
		return capacity;
	}

	T& operator[](size_t id)
	{
		return values[id];
	}

	T& at(size_t id)
	{
		if (id < 0 || id >= size)
		{
			std::cout << "Error! Dynarray id is out of bounds\n";
			std::exit(1);
		}
		return values[id];
	}

	~Dynarray()
	{
		delete[] values;
	}
};


using namespace std;

int main()
{
	Dynarray<int> a;
	for (int i = 1; i < 10; ++i)
	{
		a.push_back(i * i);
	}
	
	Dynarray<string> b;
	b.push_back("Echidna");
	b.push_back("Turtle");
	b.push_back("Coati");

	// Теперь можно писать a[i], так как перегружен оператор []
	// Так как оператор [] возвращает ссылку, то элементы можно изменять:
	a[0] = 777;
	b.at(1) = "Axolotl";
	
	for (int i = 0; i < a.get_size(); i++)
		cout << a[i] << "\n";

	for (int i = 0; i < b.get_size(); i++)
		cout << b[i] << "\n";

	// operator[] не проверяет индекс, a[100] - не выдаст ошибку (хотя она есть)
	cout << a[100] << endl;

	// at() проверяет правильность индекса - строка ниже выдаст ошибку (и это хорошо, так как позволит быстрее обнаружить ошибки)
	cout << a.at(100) << endl;
}
