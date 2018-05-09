

all:checkdir bin/calcul

test:bin/calcul-test

bin/calcul:build/calc.o build/main.o build/StrNum.o
	gcc build/calc.o  build/main.o build/StrNum.o -o bin/calcul -lm

bin/calcul-test: build/main_test.o build/calc.o build/StrNum.o
	gcc -Wall -Werror build/main_test.o build/calc.o build/StrNum.o -o bin/calcul-test -lm

build/main.o:src/main.c
	gcc -c src/main.c -o build/main.o -Wall -Werror

build/calc.o:src/calc.c
	gcc -c src/calc.c -o build/calc.o -Wall -Werror

build/StrNum.o:src/StrNum.c
	gcc -c src/StrNum.c -o build/StrNum.o -Wall -Werror


build/main_test.o: tests/main.c
	gcc -I thirdparty -I src -c tests/main.c -o build/main_test.o

checkdir:
	@if [ -d bin  ];then echo ; else mkdir bin;fi
	@if [ -d build  ];then echo ; else mkdir build;fi

.PHONY:clean

clean:
	rm build/*.o
	rm bin/*.exe
