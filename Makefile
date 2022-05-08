# SOURCES
SOURCES = ${shell find . -name '*.c'}
MAIN = src/main.cpp

# INCLUDES
INCLUDES = ${wildcard include/*.h}

# LIBS
LIB_SOURCES = ${filter-out $(MAIN), $(SOURCES)}
LIB = lib/libtemp.a

# BIN
BIN = bin/ctemp

# FLAG
CXXFLAGS = -Iinclude -Llib -ltemp

# DIREC
USR_PATH = /usr/bin

MKDIR = mkdir -p obj && mkdir -p lib && mkdir -p bin 
RMDIR = rmdir obj && rmdir lib && rmdir bin

.PHONY: all
all: $(BIN) $(LIB) 

$(LIB): $(LIB_SOURCES) $(INCLUDES)
	@$(MKDIR)
	@g++ -o obj/TempConversion.o -c src/TempConversion.cpp $(CXXFLAGS)
	@g++ -o obj/MyTime.o -c src/MyTime.cpp $(CXXFLAGS)
	@g++ -o obj/Terminal.o -c src/Terminal.cpp $(CXXFLAGS)
	@ar rcs lib/libtemp.a obj/*.o

$(BIN): $(MAIN) $(INCLUDES) $(LIB)
	@g++ -o $@ $< $(CXXFLAGS)
	@echo "Successfully build!"

.PHONY: install
install:
	@sudo cp ./bin/ctemp $(USR_PATH)

.PHONY: uninstall
uninstall:
	@sudo rm $(USR_PATH)/ctemp

.PHONY: clean
clean:
	@rm -f lib/* bin/* obj/*
	@$(RMDIR)
	@echo "Clean!"
