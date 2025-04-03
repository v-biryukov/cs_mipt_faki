#   Передача нескольких аргументов в команды set и message
#
#   По сравнению с предыдущим скриптом, были убраны кавычки в функции message.
#   Что сейчас напечатает этот скрипт?

set(ALICE "One Two Three")    # ALICE  будет равно "One Two Three"
set(BOB One Two Three)        # BOB    будет равно "One;Two;Three"
set(CASPER "One;Two;Three")   # CASPER будет равно "One;Two;Three"
set(DIANA One;Two;Three)      # DIANA  будет равно "One;Two;Three"

message(${ALICE})
message(${BOB})
message(${CASPER})
message(${DIANA})