#include<stdio.h>
#include<stdlib.h>
#define MAX 500

//Function that gets the id of a process 
void 
copy_id(char x[],int *id,int space)
{	
	char str[4];
	int i;

	for(i=0;i<4;i++)
		str[i]=x[++space];
	
	*id=atoi(str);
}

//Function that gets first space occurence in string which it gets as input from stdin
void
read_b4space (char x[],int *space)
{
	fgets(x,MAX,stdin);

	while(x[*space] != ' ' || x[*space] == '\0')
		(*space)++;
		
}
	
void
main()
{
	int id1=0,id2=0,space=0;
	char first[MAX];

	read_b4space (first,&space);
	copy_id(first,&id1,space+1);
	
	space=0;
	read_b4space (first,&space);
	copy_id(first,&id2,space+1);
	
	printf("%d %d",id1,id2);

}
