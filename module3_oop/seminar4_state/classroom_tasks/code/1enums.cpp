#include <iostream>

/*
    Перечисляемый тип в языке C++

    Так как C почти входит в C++, вы можете использовать enum в стиле C и на C++
    Однако, это не очень хорошая идея, так как у перечислений в стиле C есть проблема:
    они занимают имена. Если вы заняли имя Open, то вы его уже больше не сможете использовать
    для имён переменных или для других enum-ов


    Вместо простых enum-ов, в C++ используются enum-классы
    (которые почти аналогичны enum-ам, но в названия состояний добавляется     <имя типа enum-а>::     )
*/

enum class DoorState 
{
	Open, Closed, Locked
};
// На языке C++ проблема конфликта имён не стоит

int main()
{
	// Создадим переменную a, которая может применять 3 значения (DoorState::Open, DoorState::Closed и DoorState::Locked)
	DoorState a = DoorState::Open;

	if (a == DoorState::Open)
		std::cout << "It's open!\n";
	else if (a == DoorState::Closed)
		std::cout << "It's closed!\n";
	else
		std::cout << "It's locked :(\n";
}

/* Задания:
	1) Создайте перичисляемый тип CharacterState, который будет описывать движение персонажа в 2d игре:
		Idle (стоит), Walking (идёт), Running (бежит), Jumping (прыгает)
	2) Создайте переменную b этого типа и присвойте её значение CharacterState::Running. Проверьте правильность
		напечатав состояние
	3) Используйте оператор switch (за место if), чтобы напечатать состояние
*/