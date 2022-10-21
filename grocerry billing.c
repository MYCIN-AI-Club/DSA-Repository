#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<MMsystem.h>
#include<time.h>

int main(){
	
	float rate[10],amt[10],dis,grossamt=0,netamt;
	
	int quantity[10],n,i;
	
	char item[10][10];	
	 char  _date_,_time_;

		
		
printf("enter todays date \n");
scanf("%s",&_date_);

	printf("Number of items:");
	
	scanf("%d",&n);
	
	printf("Name of product, rate and quantity.\n");
	


	for(i=0;i<n;i++){
	
		printf("Name of product:");
	
		scanf("%s",item[i]);
	
		printf("Rate:");
	
		scanf("%f",&rate[i]);
	
		printf("Quantity:");
	
		scanf("%d",&quantity[i]);
	
	}
	
	for(i=0;i<n;i++){
		
		amt[i]=rate[i]*quantity[i];
		
		grossamt+=amt[i];
	
	}
	
	if(grossamt<1000){
	
	dis=0;
	}
	
	else{
	
		if(grossamt>=1000 && grossamt<5000){
	
			dis=(grossamt*5)/100;
	
		}
	
		else{
	
			if(grossamt>=5000 && grossamt<10000){
	
				dis=(grossamt*8)/100;
			}
	
			else{
				dis=(grossamt*10)/100;
			}
		}
	}
	
	netamt=grossamt-dis;
	
	system("cls");
		printf("%s",_date_);
	
	printf("\n\n\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	
	printf("\t\t\t\t\t JANTA GERNAL STORE\n");
	
	printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	
	printf("\t\t\t   Sno.   Name      Quantity    Rate     Amount\n");
	
	for(i=0;i<n;){
		printf("\t\t\t   %d      %s      %d          %.1f    %.1f \n",++i,item[i],quantity[i],rate[i],amt[i]);
	}
	
	printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	
	printf("\n\t\t\tGrand Total : %.2f\n",grossamt);
	
	printf("\t\t\tDiscount allowed : %.2f\n",dis);
	
	printf("\t\t\tPayable net amount :%.2f\n",netamt);
	
	printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	
	printf("\t\t\t\t\t Thank you! Visit again,\n");
	
	printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");


//	PlaySound(TEXT("C:\\Users\\DELL\\Music\\00\\project.wav"),NULL,SND_SYNC);
	
	getch();
	
	return 0;
}