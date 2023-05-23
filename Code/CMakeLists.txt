cmake_minimum_required(VERSION 3.24)
project(EnigmaMachine C)

set(CMAKE_C_STANDARD 11)

add_executable(EnigmaMachine main.c defines.h input_fields.h plugboard.h reflector.h rotor_position_updater.h rotor_encoder.h variables_and_arrays.h)
