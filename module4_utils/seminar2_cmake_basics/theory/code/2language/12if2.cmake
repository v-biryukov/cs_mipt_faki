set(a "Cat")
set(b a STREQUAL "Cat")

message(${b})

if(a STREQUAL "Cat")
    message("Yes")
else()
    message("No")
endif()

