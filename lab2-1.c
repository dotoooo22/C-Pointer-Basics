#include <stdio.h>
int main()
{
    char charType;      //char�� ���� charType ����
    int integerType;    //int�� ���� integerType ����
    float floatType;    //float�� ���� floatType ����
    double doubleType;  //double�� ���� doubleType ����
    printf("[----- [������] [2021041021] -----]\n");    //�й��̸����
    printf("Size of char: %ld byte\n",sizeof(charType));        //���� charType�� ũ�� Ȯ��(1byte)
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //���� integerType�� ũ�� Ȯ��(4byte)
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //���� floatType�� ũ�� Ȯ��(4byte)
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //���� doubleType�� ũ�� Ȯ��(8byte)
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //char���� ũ�� Ȯ��(1byte)
    printf("Size of int: %ld bytes\n",sizeof(int));             //int���� ũ�� Ȯ��(4byte)
    printf("Size of float: %ld bytes\n",sizeof(float));         //float���� ũ�� Ȯ��(4byte)
    printf("Size of double: %ld bytes\n",sizeof(double));       //double���� ũ�� Ȯ��(8byte)
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //char������Ÿ���� ũ�� Ȯ��
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //int������Ÿ���� ũ�� Ȯ��
    printf("Size of float*: %ld bytes\n",sizeof(float*));       //float������Ÿ���� ũ�� Ȯ��
    printf("Size of double*: %ld bytes\n",sizeof(double*));     //double������Ÿ���� ũ�� Ȯ�� (������ ������ �� 4byte)
    return 0;
}