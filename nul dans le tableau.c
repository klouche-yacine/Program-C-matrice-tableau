#include<stdio.h>
main()
{int i,n;
int t[100];


printf("donnez la taille du tableau :");
scanf("%d",&n);

for(i=0;i<n;i++)
{printf("donnez le nombre de t[%d]",i);
scanf("%d",&t[i]);

}
i=0;
while(i<n)
{if(t[i]==0)
t[i]=t[i+1];
i=i+1;
}
for(i=0;i<n;i++)
	printf("t[%d]=%d\n",i,t[i]);
	
}




