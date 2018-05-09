#define CTEST_MAIN

#include "calc.h"

#include "ctest.h"

CTEST(Sum, Correct) {
    int result = MainFunctions(6, 3, 5);
    int expected = 8;
    ASSERT_EQUAL(expected, result);
}
CTEST(Sum, Incorrect) {
     int result = MainFunctions(6, 3, 5);
    int expected = 12;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Subtraction , Correct) {
    int result = MainFunctions(7, 8, 5);
    int expected = 3;
    ASSERT_EQUAL(expected, result);
}
CTEST(Subtraction , Incorrect) {
     int result = MainFunctions(7, 8, 5);
    int expected = 2;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Multi , Correct) {
    int result = MainFunctions(8, 3, 5);
    int expected = 15;
    ASSERT_EQUAL(expected, result);
}

CTEST(Multi , Incorrect) {
     int result = MainFunctions(8, 3, 5);
    int expected = 2;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Div , Correct) {
    int result = MainFunctions(9, 8, 2);
    int expected = 4;
    ASSERT_EQUAL(expected, result);
}

CTEST(Div , Incorrect) {
     int result = MainFunctions(9, 8, 2);
    int expected = 2;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Fact , Correct) {
    int result = Fact(3);
    int expected = 6;
    ASSERT_EQUAL(expected, result);
}

CTEST(Fact , Incorrect) {
     int result = Fact(3);
    int expected = 2;
    ASSERT_NOT_EQUAL(expected, result);
}


CTEST(Sin, Correct){
	long double result = Trigonometry(10, 30);
	long double expected = 0.5;
	ASSERT_EQUAL(expected, result);
}
CTEST(Sin, Incorrect){
	long double result = Trigonometry(10, 30);
	long double expected = 1.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Cos, Correct){
	long double result = Trigonometry(11, 0);
	long double expected = 1;
	ASSERT_EQUAL(expected, result);
}
CTEST(Cos, Incorrect){
	long double result = Trigonometry(11, 0);
	long double expected = 0.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Tang, Correct){
	long double result = Trigonometry(12, 60);
	long double expected = 1.73;
	ASSERT_EQUAL(expected, result);
}
CTEST(Tang, Incorrect){
	long double result = Trigonometry(12, 60);
	long double expected = 0.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Cotang, Correct){
	long double result = Trigonometry(13, 60);
	long double expected = 0.57;
	ASSERT_EQUAL(expected, result);
}
CTEST(Cotang, Incorrect){
	long double result = Trigonometry(13, 60);
	long double expected = 1.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(ArcSin, Correct){
	long double result = Trigonometry(14, 0.3);
	long double expected = 17.45;
	ASSERT_EQUAL(expected, result);
}
CTEST(ArcSin, Incorrect){
	long double result = Trigonometry(14, 0.3);
	long double expected = 0.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(ArcCos, Correct){
	long double result = Trigonometry(15, 0.3);
	long double expected = 72.54;
	ASSERT_EQUAL(expected, result);
}
CTEST(ArcCos, Incorrect){
	long double result = Trigonometry(15, 0.3);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(ArcTang, Correct){
	long double result = Trigonometry(16, 0.7);
	long double expected = 34.99;
	ASSERT_EQUAL(expected, result);
}
CTEST(ArcTang, Incorrect){
	long double result = Trigonometry(16, 0.7);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(ArcCotang, Correct){
	long double result = Trigonometry(17, 0.7);
	long double expected = 55.00;
	ASSERT_EQUAL(expected, result);
}
CTEST(ArcCotang, Incorrect){
	long double result = Trigonometry(17, 0.7);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Stepen, Correct){
	long double result = Stepen(2.5, 3);
	long double expected = 15.62;
	ASSERT_EQUAL(expected, result);
}
CTEST(Stepen, Incorrect){
	long double result = Stepen(2.5, 3);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(lgE, Correct){
	long double result = lgE(5.3);
	long double expected = 1.66;
	ASSERT_EQUAL(expected, result);
}
CTEST(lgE, Incorrect){
	long double result = lgE(5.3);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(lg10, Correct){
	long double result = lg10(200);
	long double expected = 2.30;
	ASSERT_EQUAL(expected, result);
}
CTEST(lg10, Incorrect){
	long double result = lg10(200);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}

CTEST(Procent, Correct){
	float result = Procent(8, 56);
	float expected = 4.48;
	ASSERT_EQUAL(expected, result);
}
CTEST(Procent, Incorrect){
	long double result = Procent(8, 56);
	long double expected = 7.5;
	ASSERT_NOT_EQUAL(expected, result);
}



int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
