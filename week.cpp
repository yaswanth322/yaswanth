#include<stdio.h>
main()
{
	int n,ch;
	printf("\n 1.sunday \n 2.monday \n 3.tuesday \n 4.wednesday \n 5.thursday \n 6.friday \n 7.saturday");
	scanf("%c",&ch);
	switch(ch)
	{
		case 1:printf("sunday");break;
		case 2:printf("monday");break;
		case 3:printf("tuesday");break;
		case 4:printf("wednesday");break;
		case 5:printf("thursday");break;
		case 6:printf("friday");break;
		case 7:printf("saturday");break;
		default:printf("\n invalid choice...!");
		
	}
	
}
