#   Функции в CMake

function(print first)
    message("First: ${first}")
    foreach(arg IN LISTS ARGN)
        message("Other: ${arg}")
    endforeach()
endfunction()

print("A" "B" "C")