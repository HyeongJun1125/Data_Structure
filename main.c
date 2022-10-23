#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	//ArrayList 구조체 생성 후 초기화
	List list;
	int data;
	ListInit(&list); //배열 초기화
	
	//5개의 데이터를 저장
	LInsert(&list,11);
	LInsert(&list,11);
	LInsert(&list,22);
	LInsert(&list,22);
	LInsert(&list,33);
	
	printf("현재 데이터의 수 : %d\n",LCount(&list)); //저장된 데이터 전체 출력
	
	if(LFirst(&list,&data))
	{
		printf("%5d",data);
		
		while(LNext(&list,&data))
			printf("%5d",data);
	}
	printf("\n\n");
	
	if(LFirst(&list,&data))
	{
		if(data==22)
			LRemove(&list);
		
		while(LNext(&list,&data))
		{
			if(data==22)
				LRemove(&list);
		}
	}
	
	printf("삭제 후 남은 데이터의 수 : %d\n",LCount(&list));
	
	if(LFirst(&list,&data))
	{
		printf("%5d",data);
		
		while(LNext(&list,&data))
			printf("%5d",data);
	}
	printf("\n\n");
	
	return 0;
}