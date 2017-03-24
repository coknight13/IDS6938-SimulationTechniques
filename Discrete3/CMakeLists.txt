cmake_minimum_required(VERSION 2.8.9)

project (Discrete3)


<<<<<<< HEAD
add_executable(Markov markov.cpp markov.h main.cpp)
set_target_properties(Markov PROPERTIES LINKER_LANGUAGE CXX)
=======
add_executable(MarkovDTMC markov.cpp markov.h main.cpp)
set_target_properties(MarkovDTMC PROPERTIES LINKER_LANGUAGE CXX)

add_executable(MarkovCTMC markov.cpp markov.h main_ctmc.cpp)
set_target_properties(MarkovCTMC  PROPERTIES LINKER_LANGUAGE CXX)
>>>>>>> 851056092e8f9d57fee634149c911d4cc0bbfbf9
