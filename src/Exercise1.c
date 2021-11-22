/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	int check;
	int a;

	if(n>=1000)
	{
		a=n/1000;
		if (a==1){
			printf("one");
		}
		else if(a==2){
			printf("two");
		}
		else if(a==3){
			printf("three");
		}
		else if(a==4){
			printf("four");
		}
		else if(a==5){
			printf("five");
		}
		else if(a==6){
			printf("six");
		}
		else if(a==7){
			printf("seven");
		}
		else if(a==8){
			printf("eight");
		}
		else if(a==9){
			printf("nine");
		}
		printf(" thousand ");
		n-=(a*1000);
	}
	if(n>=100&&n<1000)
	{
		a=n/100;
		if (a==1){
		printf("one");
	}
	else if(a==2){
		printf("two");
	}
	else if(a==3){
		printf("three");
	}
	else if(a==4){
		printf("four");
	}
	else if(a==5){
		printf("five");
	}
	else if(a==6){
		printf("six");
	}
	else if(a==7){
		printf("seven");
	}
	else if(a==8){
		printf("eight");
	}
	else if(a==9){
		printf("nine");
	}
		printf(" hundred ");
		n=n-(a*100);
	}
	if (n>=20&&n<100)
	{
		if(n>=90){
			printf("ninety ");
			n-=90;
		}
		else if(n>=80){
			printf("eighty ");
			n-=80;
		}
		else if(n>=70){
			printf("seventy ");
			n-=70;
		}
		else if(n>=60){
			printf("sixty ");
			n-=60;
		}
		else if (n>=50){
			printf("fifty");
			n-=50;
		}
		else if(n>=40){
			printf("fourty ");
			n-=40;
		}
		else if(n>=30){
			printf("thirty ");
			n-=30;
		}
		else if(n>=20){
			printf("twenty ");
			n-=20;
		}
	}	
	if(n>=0&&n<10)
	{
	if (n==1){
		printf("one");
	}
	else if(n==2){
		printf("two");
	}
	else if(n==3){
		printf("three");
	}
	else if(n==4){
		printf("four");
	}
	else if(n==5){
		printf("five");
	}
	else if(n==6){
		printf("six");
	}
	else if(n==7){
		printf("seven");
	}
	else if(n==8){
		printf("eight");
	}
	else if(n==9){
		printf("nine");
	}
}
	if(n>=10&&n<20){
		if(n==10){
			printf("ten");
		}
		else if(n==11){
			printf("eleven");
		}
		else if (n==12)
		{
			printf("twelve ");
		}
		else if (n==13)
		{
			printf("thirteen ");
		}
		else if(n==14)
		{
			printf("fourteen ");
		}
		else if(n==15){
			printf("fifteen ");
		}
		else if(n==16){
			printf("sixteen");
		}
		else if(n==17){
			printf("seventeen ");
		}
		else if(n==18){
			printf("eighteen ");
		}
		else if(n==19){
			printf("nineteen ");
		}
		
		
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
