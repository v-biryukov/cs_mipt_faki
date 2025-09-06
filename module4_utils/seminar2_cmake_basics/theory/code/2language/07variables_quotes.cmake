#   Переменные CMake
#
#   Ещё одна необычная особенность использования переменных в CMake, это то что у строк 
#   очень часто можно опускать кавычки. CMake всё равно воспримет это как строку. 

set(ALICE "Cat")
set(BOB Dog)

message("ALICE = ${ALICE}")  # напечатает   ALICE = CAT
message("BOB = ${BOB}")      # напечатает   BOB = DOG


# Однако это может работать не так, как ожидалось, если строка содержит пробелы
set(CASPER "One Two Three")
set(DIANA One Two Three)

message("CASPER = ${CASPER}")    # напечатает   CASPER = One Two Three
message("DIANA = ${DIANA}")      # напечатает   DIANA = One;Two;Three