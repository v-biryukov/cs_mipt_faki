#   Команда message
#
#   Команда message печатает сообщение на экран на шаге конфигурации (или при запуске скрипта).
#   Первым аргументом команды message может стоять тип сообщения.
#   Тип сообщения может быть STATUS, WARNING, SEND_ERROR, FATAL_ERROR или некоторым другим.
#   
#   Типы сообщений изменяют формат печати, а также выход (stdout или stderr).
#   Также, после сообщения типа FATAL_ERROR cmake автоматически завершает работу

message("Regular message")

message(STATUS "A status Message")

message(WARNING "A warning")

message(SEND_ERROR "Print an error")

message(FATAL_ERROR "Print an error and quit")

message("This message won't print")


