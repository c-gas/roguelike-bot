cmake_minimum_required (VERSION 3.6)
project(bot)

add_subdirectory(sleepy-discord)

add_executable(bot bot.cpp)

target_link_libraries(bot sleepy-discord)

