cmake_minimum_required(VERSION 3.16)
project(movieDb)

set(CMAKE_CXX_STANDARD 14)

add_executable(movieDb main.cpp Application.cpp Application.h AbstractVideo.cpp AbstractVideo.h Movie.cpp Movie.h Series.cpp Series.h VideoRepository.cpp VideoRepository.h IVideo.h NotFoundException.cpp NotFoundException.h)