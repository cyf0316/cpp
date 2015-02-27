#include <string.h>
#include <iostream>
using namespace::std;

#include "fun.h"
using namespace::iotek;

int main(int argc,char *argv[]){
	char name[20]={};
	int age=0;
	if(argv[1]==NULL){
		cout<<"my name is:";
		cin>>name;
	}else{
		strcpy(name,argv[1]);
	}
	cout<<"year old is:";
	cin>>age;
	outputInfo(name,age);
	return 0;
}
