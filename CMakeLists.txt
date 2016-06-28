cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(q_learning)

add_executable (simulation src/simulation.cpp)
add_executable (select_action src/select_action.cpp)
add_executable (greedy src/greedy.cpp)
add_executable (cheese_vending_machine src/cheese_vending_machine.cpp)
