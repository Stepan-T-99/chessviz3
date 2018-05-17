CFLAGS = -Wall -Werror 
OBJ = gcc -c $< -o $@ $(CFLAGS)

.PHONY: clean
all:bin build bin/chessviz.exe

test: bin/chessviz_test.exe
	$<

bin/chessviz.exe:  build/main.o build/boardprint.o build/board.o build/boardread.o
	gcc $^ -o $@ $(CFLAGS)

bin/chessviz_test.exe: build/board.o  build/main_test.o
	gcc $^ -o $@ $(CFLAGS)


build/boardprint.o: src/boardprint.c src/boardprint.h
	$(OBJ)

build/boardread.o: src/boardread.c src/boardread.h
	$(OBJ)

build/board.o: src/board.c src/board.h
	$(OBJ)

build/main.o: src/main.c
	$(OBJ)

build/main_test.o: test/main.c thirdparty/ctest.h test/board_test.c
	$(OBJ)



bin: 
	mkdir bin
build:
	mkdir build

clean:
	rm build/*.o
	rm bin/*.exe
