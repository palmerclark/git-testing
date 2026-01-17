cmake_minimum_required(VERSION 3.23)
project(git-testing)

add_executable(test)

target_sources(test
  PRIVATE
    hello-world.cpp
  )
