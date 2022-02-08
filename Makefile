

all:
	g++ -o ctemp src/main.cpp -g -Wall

clean:
	rm -rf bin/*
