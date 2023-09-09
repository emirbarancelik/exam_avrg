#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("*********************************\n");
	printf("* LESSON AVERAGE KONTROL SYSTEM *\n");
	printf("*********************************\n\n");
	
	float e1,e2,avrg;
	printf("Enter your first exam note: ");
	scanf("%f",&e1);
	
	printf("Enter your second exam note: ");
	scanf("%f",&e2);
	
	avrg=(e1+e2)/2;
	
	if(avrg>=0 && avrg<=100){
		if (avrg>=50){
			printf("Congratulations, you've passed! Your average note is: %f\n", avrg);
		}else{
			printf("You have not passed. Your average note is: %f",avrg);
		}
	}else{
		printf("The average note must be between 0 and 100");
	}
		
		
		
		
		
	
	




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
