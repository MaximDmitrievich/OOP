FLAGS=-g -pedantic -Wall -std=c++11 -Werror -Wno-sign-compare
CC=g++

all: pentagon hexagon octagon tree_node ntree main.cpp
	$(CC) -c $(FLAGS) main.cpp
	$(CC) $(FLAGS) -o NTree Pentagon.o Hexagon.o Octagon.o ntree.o tree_node.o main.o

pentagon: Pentagon.cpp
	$(CC) -c $(FLAGS) Pentagon.cpp

hexagon: Hexagon.cpp
	$(CC) -c $(FLAGS) Hexagon.cpp

octagon: Octagon.cpp
	$(CC) -c $(FLAGS) Octagon.cpp

ntree_elem: tree_node.cpp
	$(CC) -c $(FLAGS) tree_node.cpp

ntree: ntree.cpp
	$(CC) -c $(FLAGS) ntree.cpp

clean:
	rm -f *.o
	rm -f *.txt
	rm -f *.stackdump
