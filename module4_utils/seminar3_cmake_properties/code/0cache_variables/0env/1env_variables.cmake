set(EVARS OS HOME PATH TMP LANG USR)

foreach(elem IN LISTS EVARS)
    message("${elem} = $ENV{${elem}}")
endforeach()