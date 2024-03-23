#include<stdio.h>
int main()
{
printf("1 in main() \n");
fun();
printf("2 int main() \n");
}
 void fun(){
	printf("1 in fun() \n");
funone();
printf("2 int fun() \n");
}
void funone(){
	printf("1 in funone() \n");
funtwo();
printf("2 int funone() \n");

}
void funtwo(){
printf("1 in funtwo() \n");
funthree();
printf("2 int funtwo() \n");

}
void funthree()
{
printf("funthree () called \n");

}
