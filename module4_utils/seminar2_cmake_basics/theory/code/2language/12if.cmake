cmake_minimum_required(VERSION 3.27)

set(ALICE BOB)
set(BOB no)

if(ALICE)
    message("Yes")
else()
    message("No")
endif()


if(${ALICE})
    message("Yes")
else()
    message("No")
endif()

