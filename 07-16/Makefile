files_1: files_1.cpp
	g++ files_1.cpp -o files_1

files_1.5: files_1.5.o
	g++ files_1.5.o -o files_1.5

files_1.5.o: files_1.5.cpp
	# this will make files_1.5.o for use by the above rule
	g++ -c files_1.5.cpp

files_2: files_2.o
	g++ files_2.o -o files_2

files_2.o: files_2.cpp
	g++ -c files_2.cpp

option_a: option_a.o
	g++ option_a.o -o option_a

option_a.o: option_a.cpp
	g++ -c option_a.cpp

option_b: option_b.o
	g++ option_b.o -o option_b

option_b.o: option_b.cpp
	g++ -c option_b.cpp

files_3: files_3.o
	g++ files_3.o -o files_3

translate: translate.o
	g++ translate.o -o translate