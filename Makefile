
all:checkdir bin/calcul

bin/calcul:build/calc.o build/main.o 
	gcc build/calc.o  build/main.o -o bin/calcul
build/main.o:src/main.c
	gcc -c src/main.c -o build/main.o -Wall -Werror

build/calc.o:src/calc.c
	gcc -c src/calc.c -o build/calc.o -Wall -Werror


checkdir:
	@if [ -d bin  ];then echo ; else mkdir bin;fi
	@if [ -d build  ];then echo ; else mkdir build;fi
