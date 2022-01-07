

all:
	g++ -o bin/ctemp src/main.cpp -g -Wall

clean:
	rm -rf bin/*
