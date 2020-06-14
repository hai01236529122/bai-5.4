#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

struct sinh_vien{
	char hoten[151];
};
 main(){
	struct sinh_vien sv[99];
	int k,l;
	do{
	 		scanf("%d",&k);
		}while(k<=0 || k>100);
	int i,j,dem;
	for(l=0;l<k;l++){
		  	fflush(stdin); gets(sv[l].hoten);}
		for(l=0;l<k;l++){
		  	dem=0;
		  	int n=strlen(sv[l].hoten);
		  	for(i=n-1;i>=0;i--)
		    	if (sv[l].hoten[i]!=' '){
					sv[l].hoten[i+1]='\0';break;
				}
		    n=strlen(sv[l].hoten);
		for(i=0;i<n;i++)
		    if (sv[l].hoten[i]==' '&&sv[l].hoten[i+1]==' ')
		        {for(j=i;j<n;j++) sv[l].hoten[j]=sv[l].hoten[j+1];i--;}
		if(sv[l].hoten[0]==' ') for(j=0;j<n;j++) {sv[l].hoten[j]=sv[l].hoten[j+1];}
		n=strlen(sv[l].hoten);
		for(i=0;i<n;i++) 
			sv[l].hoten[i]=toupper(sv[l].hoten[i]);
		printf("%s",sv[l].hoten);
		for(i=0;i<n;i++) dem +=1;
		printf(":%d\n",dem);}
	  return 0;
	 }
