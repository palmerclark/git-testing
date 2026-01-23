cmake_minimum_required(VERSION 3.23)
project(git-testing)

add_executable(test)

target_sources(test
  PRIVATE
    testing.cpp
  )

  add_library(test-library)

target_sources(test-library
  PRIVATE
    library.cpp

    PUBLIC
      FILE_SET my_headers
      TYPE HEADERS
      BASE_DIRS
	~/projects/git-testing
      FILES
	~/projects/git-testing/library.h
)

target_link_libraries(test
  PRIVATE
    test-library
)
