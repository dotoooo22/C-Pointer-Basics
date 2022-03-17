#include <stdio.h>
int main()
{
    char charType;      //char형 변수 charType 선언
    int integerType;    //int형 변수 integerType 선언
    float floatType;    //float형 변수 floatType 선언
    double doubleType;  //double형 변수 doubleType 선언
    printf("[----- [곽민정] [2021041021] -----]\n");    //학번이름출력
    printf("Size of char: %ld byte\n",sizeof(charType));        //변수 charType의 크기 확인(1byte)
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //변수 integerType의 크기 확인(4byte)
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //변수 floatType의 크기 확인(4byte)
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //변수 doubleType의 크기 확인(8byte)
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //char형의 크기 확인(1byte)
    printf("Size of int: %ld bytes\n",sizeof(int));             //int형의 크기 확인(4byte)
    printf("Size of float: %ld bytes\n",sizeof(float));         //float형의 크기 확인(4byte)
    printf("Size of double: %ld bytes\n",sizeof(double));       //double형의 크기 확인(8byte)
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //char포인터타입의 크기 확인
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //int포인터타입의 크기 확인
    printf("Size of float*: %ld bytes\n",sizeof(float*));       //float포인터타입의 크기 확인
    printf("Size of double*: %ld bytes\n",sizeof(double*));     //double포인터타입의 크기 확인 (포인터 변수는 다 4byte)
    return 0;
}