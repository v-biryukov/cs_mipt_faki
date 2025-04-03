#   Цикл foreach в CMake


message("Iterating in range from 0 to 10:")
foreach(i RANGE 10)
    message("${i}")
endforeach()

message("\nIterating in range from 5 to 10:")
foreach(i RANGE 5 10)
    message("${i}")
endforeach()


message("\nIterating in items:")
foreach(elem IN ITEMS One Two Three)
    message("${elem}")
endforeach()


message("\nIterating in elemenst of lists:")
set(ALICE "One;Two;Three;Four;Five")
set(BOB "Cat;Dog;Mouse")
foreach(elem IN LISTS ALICE BOB)
    message("${elem}")
endforeach()
