#include <stdio.h>
#define add(x,y) ((x) + (y))
#define sub(x,y) ((x) - (y))
#define mul(x,y) ((x) * (y))
#define div(x,y) ((float)(x) / (y))

int main(){
	int x,y,sel;
	float result;
	printf("enter first number\n");
	scanf("%d",&x);
	printf("enter second number\n");
	scanf("%d",&y);
	printf("select which operation you want to do\n");
	printf("\t1 : addition\n\t2 : substration\n\t3 : multiplication\n\t4 : division\n");
	scanf("%d",&sel);
	switch(sel){
		case 1 :
			result = add(x,y);
			printf("\n%d + %d =  %.02f\n",x,y,result);
			break;
		case 2 : 
			result = sub(x,y);
			printf("\n%d - %d =  %.02f\n",x,y,result);
			break;
		case 3 : 
			result = mul(x,y);
			printf("\n%d * %d =  %.02f\n",x,y,result);
			break;
		case 4 :
			result =div(x,y);	
			printf("\n%d / %d =  %.02f\n",x,y,result);	
			break;
		default :
			printf("\n error : invalid selection\n");
			return 1;
	}

}

