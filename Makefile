# workshop: main.o dynamicArray.o printArray.o changeValue.o arrayMax.o
# 	g++ -o workshop main.o dynamicArray.o printArray.o changeValue.o arrayMax.o

# main.o: main.cpp workshop.h
# 	g++ -c main.cpp

# dynamicArray.o: dynamicArray.cpp workshop.h
# 	g++ -c dynamicArray.cpp

# printArray.o: printArray.cpp workshop.h
# 	g++ -c printArray.cpp

# changeValue.o: changeValue.cpp workshop.h
# 	g++ -c changeValue.cpp

# arrayMax.o: arrayMax.cpp workshop.h
# 	g++ -c arrayMax.cpp
# run: workshop
# 	./workshop

# Workshop Makefile

# workshop: main.o
#     g++ -o workshop main.o

# main.o: main.cpp workshop.h
#     g++ -c main.cpp

# run: workshop
#     ./workshop

main: main.cpp
	g++ main.cpp -o main
	./main