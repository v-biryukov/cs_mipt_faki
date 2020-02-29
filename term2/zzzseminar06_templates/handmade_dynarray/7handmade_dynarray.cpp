#include <iostream>
#include <algorithm>
#include <string>
#include <initializer_list>

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

	Dynarray(std::initializer_list<T> il)
	{
		size = il.size();
		capacity = size;
		values = new T[capacity];
		std::copy(il.begin(), il.end(), values);
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
		for (size_t i = id; i < size - 1; i++)
			values[i] = values[i + 1];
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

	Dynarray& operator=(const Dynarray& right)
	{
		// Проверяем на случай a = a
		if (&right == this)
			return *this;

		delete[] values;
		size = right.size;
		capacity = right.capacity;
		values = new T[capacity];
		for (size_t i = 0; i < size; i++)
			values[i] = right.values[i];
		return *this;
	}

	~Dynarray() 
	{
		delete[] values;
	}
};


using namespace std;

int main()
{
	// Писать = необязательно
	Dynarray<string> a = {"Cat", "Dog", "Nutria"};
	Dynarray<string> b = {"Echidna", "Turtle", "Coati"};

	cout << "a = ";
	for (int i = 0; i < a.get_size(); i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "b = ";
	for (int i = 0; i < b.get_size(); i++)
		cout << b[i] << " ";
	cout << endl;

	a = a;
	b = b;
	b = a;
	cout << "b = a; b = ";
	for (int i = 0; i < b.get_size(); i++)
		cout << b[i] << " ";
	cout << endl;

}
