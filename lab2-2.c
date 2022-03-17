#include <stdio.h>
int main() {
    int i;          //���������� i
    int *ptr;       //�����ͺ��� ptr
    int **dptr;     //���������� dptr
    i = 1234;       //i�� 1234 �ֱ�
    printf("[----- [������] [2021041021] -----]\n");    //�й��̸����
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                //i�� ���
    printf("address of i == %p\n", &i);             //i�� �ּ� ���
    printf("value of ptr == %p\n", ptr);            //ptr ��(�������ȳ־��༭ �ƹ��ּ� ��������)
    printf("address of ptr == %p\n", &ptr);         //�����ͺ��� ptr�� �ּ� ���
    ptr = &i; /* ptr is now holding the address of i / ptr���ٰ� i�� �ּ� �ֱ�*/
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                //i�� ���
    printf("address of i == %p\n", &i);             //i�� �ּ����
    printf("value of ptr == %p\n", ptr);            //ptr���( ptr�� i�� �ּ� ���� ����)
    printf("address of ptr == %p\n", &ptr);         //ptr�� �ּ� ���
    printf("value of *ptr == %d\n", *ptr);          //ptr�� ����Ű�� ���� ��(i��) ���
    dptr = &ptr; /* dptr is now holding the address of ptr / dptr�� ptr�ּ� �ֱ� */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                //i�� ���
    printf("address of i == %p\n", &i);             //i�� �ּ� ���
    printf("value of ptr == %p\n", ptr);            //prt ��(i�� �ּ�) ���
    printf("address of ptr == %p\n", &ptr);         //ptr�� �ּ� ���
    printf("value of *ptr == %d\n", *ptr);          //ptr�� ����Ű�� ���� ��(i��) ���
    printf("value of dptr == %p\n", dptr);          //dptr�� ��(ptr�ּ�) ���
    printf("address of ptr == %p\n", &dptr);        //dptr�� �ּ� ���
    printf("value of *dptr == %p\n", *dptr);        //dptr�� ����Ű�� ���� ��(i�ּ�) ���
    printf("value of **dptr == %d\n", **dptr);      //dptr�� ����Ű�� ���� ��(ptr�� ����ִ� i�ּ�)�� ����Ű�� ���� ��(i��) ���
    *ptr = 7777; /* changing the value of *ptr / ptr�� ����Ű�� ��(i��)�� 7777�ֱ� */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                //i��(7777) ���
    printf("value of *ptr == %d\n", *ptr);          //ptr�� ����Ű�� �� ��(i��7777) ���
    printf("value of **dptr == %d\n", **dptr);      //dptr�� ����Ű�� ���� ����Ű�� ���� ��(i��7777) ���
    **dptr = 8888; /* changing the value of **dptr / dptr�� ����Ű�� ����Ű�� ���� 8888 �ֱ� */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);                //i�� ���
    printf("value of *ptr == %d\n", *ptr);          //ptr�� ����Ű�� ���� ��(i��8888) ���
    printf("value of **dptr == %d\n", **dptr);      //dptr�� ����Ű�� ���� ��(ptr�� �ִ� i�ּ�)�� ����Ű�� ���� ��(i��8888) ���
    return 0;
}