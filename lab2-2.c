#include <stdio.h>
int main() {
    int i;          //정수형변수 i
    int *ptr;       //포인터변수 ptr
    int **dptr;     //이중포인터 dptr
    i = 1234;       //i에 1234 넣기
    printf("[----- [곽민정] [2021041021] -----]\n");    //학번이름출력
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                //i값 출력
    printf("address of i == %p\n", &i);             //i의 주소 출력
    printf("value of ptr == %p\n", ptr);            //ptr 값(아직뭘안넣어줘서 아무주소 갖고있음)
    printf("address of ptr == %p\n", &ptr);         //포인터변수 ptr의 주소 출력
    ptr = &i; /* ptr is now holding the address of i / ptr에다가 i의 주소 넣기*/
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                //i값 출력
    printf("address of i == %p\n", &i);             //i의 주소출력
    printf("value of ptr == %p\n", ptr);            //ptr출력( ptr은 i의 주소 갖고 있음)
    printf("address of ptr == %p\n", &ptr);         //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);          //ptr이 가리키는 곳의 값(i값) 출력
    dptr = &ptr; /* dptr is now holding the address of ptr / dptr에 ptr주소 넣기 */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                //i값 출력
    printf("address of i == %p\n", &i);             //i의 주소 출력
    printf("value of ptr == %p\n", ptr);            //prt 값(i의 주소) 출력
    printf("address of ptr == %p\n", &ptr);         //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);          //ptr이 가리키는 곳의 값(i값) 출력
    printf("value of dptr == %p\n", dptr);          //dptr의 값(ptr주소) 출력
    printf("address of ptr == %p\n", &dptr);        //dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);        //dptr이 가리키는 곳의 값(i주소) 출력
    printf("value of **dptr == %d\n", **dptr);      //dptr이 가리키는 곳의 값(ptr에 들어있는 i주소)이 가리키는 곳의 값(i값) 출력
    *ptr = 7777; /* changing the value of *ptr / ptr이 가리키는 곳(i값)에 7777넣기 */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                //i값(7777) 출력
    printf("value of *ptr == %d\n", *ptr);          //ptr이 가리키는 곳 값(i값7777) 출력
    printf("value of **dptr == %d\n", **dptr);      //dptr이 가리키는 곳이 가리키는 곳의 값(i값7777) 출력
    **dptr = 8888; /* changing the value of **dptr / dptr이 가리키는 가리키는 곳에 8888 넣기 */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);                //i값 출력
    printf("value of *ptr == %d\n", *ptr);          //ptr이 가리키는 곳의 값(i값8888) 출력
    printf("value of **dptr == %d\n", **dptr);      //dptr이 가리키는 곳의 값(ptr에 있는 i주소)이 가리키는 곳의 값(i값8888) 출력
    return 0;
}