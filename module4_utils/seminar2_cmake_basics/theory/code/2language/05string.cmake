#   Строки в CMake
#
#   Все переменные в CMake являются строками, поэтому важно научиться производить с ними
#   стандартные операции. Это делается с помощью команды string.
#   Команда string, может производить множество операций со строками.
#   Тип операции задаётся с помощью опции - первого аргумента команды.


# Создадим строку ALICE равную "Cat"
set(ALICE "Cat")
message("${ALICE}")



# Присоеденить строку "Dog" в конце строки ALICE можно так:
set(ALICE "${ALICE}Dog")
message("${ALICE}")

# Но лучше использовать команду string с опцией APPEND, которая делает то же самое.
set(ALICE "Cat")
string(APPEND ALICE "Dog")
message("${ALICE}")


# Переведём строку в верхний регистр и сохраним результат в переменной OUTPUT.
# Используем команду string с опцией TOUPPER. В результате в OUTPUT сохранится строка "CATDOG".
string(TOUPPER "${ALICE}" OUTPUT)
message("${OUTPUT}")


# Переведём строку в нижний регистр и сохраним результат в переменной OUTPUT.
# Используем команду string с опцией TOLOWER. В результате в OUTPUT сохранится строка "catdog".
string(TOLOWER "${ALICE}" OUTPUT)
message("${OUTPUT}")


# Получим длину строки и сохраним используя команду list с опцией LENGTH.
# В результате в OUTPUT сохранится строка "6".
string(LENGTH "${ALICE}" OUTPUT)
message("${OUTPUT}")


# Получим подстроку строки ALICE, начиная с индекса 1 и длины 4 символа и сохраним в OUTPUT.
# Используем команду list с опцией SUBSTRING. В результате в OUTPUT сохранится строка "atDo".
string(SUBSTRING "${ALICE}" 1 4 OUTPUT)
message("${OUTPUT}")