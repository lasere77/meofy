CXX = g++
EXEC = main.exe
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

start: compileSource compileObject run clearObject
build: compileSource compileObject

compileSource: src/Main.cpp
	$(CXX) -c src/*.cpp 

compileObject: Main.o
	$(CXX) *.o -o bin/$(EXEC) $(LIBS)

run: bin/$(EXEC)
	./bin/$(EXEC)

clearObject:
	rm *.o