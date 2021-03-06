cmake_minimum_required(VERSION 3.6)
project(design_patterns)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(behavioral_patterns/chain_of_responsibility)
add_subdirectory(behavioral_patterns/command)
add_subdirectory(behavioral_patterns/interpreter)
add_subdirectory(behavioral_patterns/iterator)
add_subdirectory(behavioral_patterns/mediator)
add_subdirectory(behavioral_patterns/memento)
add_subdirectory(behavioral_patterns/observer)
add_subdirectory(behavioral_patterns/state)
add_subdirectory(behavioral_patterns/strategy)
add_subdirectory(behavioral_patterns/template)
add_subdirectory(behavioral_patterns/visitor)
add_subdirectory(creational_patterns/abstract_factory)
add_subdirectory(creational_patterns/builder)
add_subdirectory(creational_patterns/factory)
add_subdirectory(creational_patterns/prototype)
add_subdirectory(creational_patterns/singleton)
add_subdirectory(structural_patterns/adapter)
add_subdirectory(structural_patterns/bridge)
add_subdirectory(structural_patterns/composite)
add_subdirectory(structural_patterns/decorator)
add_subdirectory(structural_patterns/facade)
add_subdirectory(structural_patterns/flyweight)
add_subdirectory(structural_patterns/proxy)

