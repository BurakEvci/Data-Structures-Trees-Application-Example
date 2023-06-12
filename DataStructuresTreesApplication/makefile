all: build run

build:

	g++ -I ./include/ -o ./lib/DosyaOkuma.o -c ./src/DosyaOkuma.cpp
	g++ -I ./include/ -o ./lib/hucre.o -c ./src/hucre.cpp
	g++ -I ./include/ -o ./lib/hucreNode.o -c ./src/hucreNode.cpp
	g++ -I ./include/ -o ./lib/doku.o -c ./src/doku.cpp
	g++ -I ./include/ -o ./lib/dokuNode.o -c ./src/dokuNode.cpp
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
		
	g++ -I ./include/ -o ./bin/main ./lib/DosyaOkuma.o ./lib/hucre.o ./lib/hucreNode.o ./lib/doku.o ./lib/dokuNode.o ./lib/Queue.o ./lib/Radix.o ./src/main.cpp 
		

run:
	./bin/main