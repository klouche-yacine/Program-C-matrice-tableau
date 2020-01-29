#include<stdio.h>
main()
{
	int t[100];
	int n,i,j,x,max,min,rang1,rang2;
	
	printf("donnez la taille du tableau : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("donnez le nombre de t[%d] : ",i);
		scanf("%d",&t[i]);
		
	}
	i=0;
	j=n-1;

	while(i<j)
	{x=t[i];
	t[i]=t[j];
	t[j]=x;
	i=i+1;
	j=j-1;
	}
	

	printf("inversement du tableau est :\n");

	for(i=0;i<n;i++)
	{printf("t[%d]=%d\n",i,t[i]);
	}
		max=0;
	min=0;
	rang1=0;
	rang2=0;
	for(i=0;i<n;i++)
	{
	if(t[max]<t[i])
	{ 
	max=i;
	rang1=max;
	}
	
	 if(t[i]<t[min])
	 {min=i;
	 rang2=min;
	 }
	  if(t[i]>0){ t[i]=(-1)*t[i];
	  }
	}
	printf("la multiplication de tableau par -1\n");
	for(i=0;i<n;i++)
	{
		 printf("t[%d]=%d\n",i,t[i]);
	}
 printf("le max est %d\n",t[max]);
 printf("le min est %d\n",t[min]);
 printf("la position du max est %d\n",max);
 printf("la position du min est %d\n",min);
}








