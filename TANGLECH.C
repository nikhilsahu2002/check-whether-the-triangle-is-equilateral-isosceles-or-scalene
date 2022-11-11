#include<stdio.h>
#include<conio.h>
void main ()
{
int angle1=0,angle2=0,angle3=0;
printf("Enter The angle1");
scanf("%d",&angle1);
printf("Enter The angle2");
scanf("%d",&angle2);
printf("Enter The angle3");
scanf("%d",&angle3);
	if (angle1== angle2 && angle3==angle2)
		printf("Equlateral trangle");
	else if (angle1==angle2 || angle2==angle3 || angle3==angle1)
		printf("isocleation trangle");
	else
		pirntf("scaler trangle");
getch();
}


