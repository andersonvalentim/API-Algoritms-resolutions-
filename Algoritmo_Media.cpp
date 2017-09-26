#include <stdio.h>
#include<string.h>
struct aluno{
	int matriula ;
	char nome[50] ; 
	float n1,n2,n3;
}aluno[2];
 main (){
 	int j;
 	int i ; 
 	float medias [2];
 	float mg=0,n=0;
 	for (i=0;i<=1;i++){
 		printf ("informe seu nome : ");
 		fflush (stdin);
 		gets (aluno[i].nome);
 		printf("Informe a sua matricula : ");
 		scanf (" %i",&aluno[i].matriula);
 		printf("Informe a primeira nota : ");
        scanf ("%f",&aluno[i].n1); 
		printf("Informe a segunda nota : ");
		scanf ("%f",&aluno[i].n2);	
		printf("Informe a terceira  nota : ");
		scanf ("%f",&aluno[i].n3);	
	 }
	 float mn =0;
	 for (i=0;i<=1;i++){
printf(" Nota %i ",aluno[i].n1);

	  if(mn<aluno[i].n1){
	  	mn=aluno[i].n1;
	  }
	  
	  medias[i]=aluno[i].n1+aluno[i].n2+aluno[i].n3/3;
	  
	 }
	 
	 
	 
	 printf("A maior nota do prova 1 : %f",mn);
	 for(i=0;i<=1;i++){
	 	
	 	if(medias[i]>mg){
	 		mg=medias[i];
	 		j=i;
		 }
		 
		 
	 }
	 printf("A maior media %f \n",mg);
	 printf("O aluno com maior media  media %s \n",aluno[j].nome);
 }
