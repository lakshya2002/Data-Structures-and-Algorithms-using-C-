cmake_minimum_required(VERSION 3.25)
project(linkedlist)

set(CMAKE_CXX_STANDARD 14)

add_executable(linkedlist
        doublyLinkedList.cpp
        "Linked List.cpp"
        singlyLinkedList.cpp Q_ReveseLL.cpp)
