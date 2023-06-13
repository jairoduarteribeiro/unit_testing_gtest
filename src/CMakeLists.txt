add_library(calc_static STATIC calc.cpp default_rng.cpp)
target_include_directories(calc_static PUBLIC .)

add_executable(calc_app main.cpp)
target_link_libraries(calc_app PRIVATE calc_static)
