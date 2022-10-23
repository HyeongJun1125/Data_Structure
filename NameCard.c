#include <stdio.h>
#include "NameCard.h"

NameCard*MakeNameCard(char*name,char*phone) //할당 및 초기화
{
	NameCard*newCard=(NameCard*)malloc(sizeof(NameCard));
	strcpy(newCard->name,name);
	strcpy(newCard->phone,phone);
	return newCard;
}

void ShowNameCardInfo(NameCard*pcard) //정보 출력
{
	printf("%s\n",pcard->name);
	printf("%s=\n",pcard->phone);
}

int NameCompare(NameCard*pcard,char*name) //이름 비교
{
	return strcmp(pcard->name,name);
}

void ChangePhoneNum(NameCard*pcard,char*phone) //번호 정보 변경
{
	strcpy(pcard->phone,phone);
}