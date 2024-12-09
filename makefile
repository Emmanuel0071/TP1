# Makefile with automatic dependencies management
# Compile all .cpp files from the current directory
# and link them to the executable into the bin directory
# All object files are generated into the build directory
# (c) 2024 by Dom Ginhac (dginhac@ubourgogne.fr)
#
# The Makefile must be in the root directory of the project where the source files

#
# Usage (in a terminal in the root directory of the project):
# make # Compile and link all .cpp files
# make clean # Clean up the build directory
#
#
# Modify the following lines to fit your project
# SRC_FILES is the list of source files to compile, files are separated by a space.
# Do not put .h files into the source files!
SRC_FILES = main.cpp
#
# APP is the name of the executable, the executable will be generated into the bin

APP = app
#
# Choose your compiler Use g++ on Linux, Windows and clang++ on Mac OS X
CXX = g++
# Compiler options Wall for all warnings, std=c++17 for C++17
CXXFLAGS = -Wall -std=c++17
#
# —————————————————————————————
# Do not modify the following lines, unless you know what you are doing