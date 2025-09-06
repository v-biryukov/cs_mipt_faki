Этот проект содержит два .cpp файла main.cpp и cube.cpp и заголовочный файл cube.hpp.

Для сборки этого проекта создайте новую папку, например с названием build, 
затем в терминале зайдите в эту папку и исполните:

    cmake ..
    cmake --build .

После этого в папке build появится исполняемый файл.

В файле CMakeLists.txt содержится следующие строки:

    cmake_minimum_required(VERSION 3.20)
    project(CubeProject)
    add_executable(main main.cpp cube.cpp cube.hpp)

В команде add_executable нужно указывать все файлы проекта, содержащие исходный код,
необходимый для компиляции соответствующего исполняемого файла.