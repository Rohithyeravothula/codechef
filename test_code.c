#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
char buf[256];
void process_token(char* str);
void process_id(char* str);
int main(){

	FILE* handle_r,*handle_w;
	handle_r = fopen("sample.c","r");
	while(fgets(buf,256,handle_r)!=NULL){

		char* tok;
		tok = strtok(buf," \n\t");
		while(tok!=NULL){
			process_token(tok);
			tok = strtok(NULL," \n\t");

		}

	}

    return 0;

}
void process_token(char* str){



	if(str[0]=='\0'){
		return;
	}

	else {

       int i=0,j=0;
       char expr[50];
		while(str[i]!='\0'){


			if(isalpha(str[i])||isdigit(str[i])||isxdigit(str[i])||strchr("$@_.'\\",str[i])!=NULL||str[i]=='"'){
				expr[j++] = str[i];
			}
		    if(strchr("+-*%^/&=|~><#",str[i])!=NULL){
				expr[j++] ='\0';
				j=0;
				process_token(expr);
				if(strchr("<>=&|+-",str[i])!=NULL&&str[i+1]==str[i]){
					i++;
				}
				else if(strchr("!+/*%-|&^~",str[i])!=NULL&&str[i+1]=='='){
					i++;
				}
				else{
				}
			}
		    if(str[i]=='('||str[i]=='['||str[i]=='{'){
				expr[j++] = '\0';
				j=0;
				process_token(expr);
			}
		    if(str[i]==')'||str[i]==']'||str[i]=='}'){
				expr[j++] = '\0';
				j=0;
				process_token(expr);
			}
		    if(str[i]==';'||str[i]==','||str[i]=='?'||str[i]==':'){
				expr[j++] = '\0';
				j=0;
				process_token(expr);
		    }
            i++;
		}
		if(j>=0&&j==i){
			expr[j++] = '\0';
			process_id(str);
			return;
		}
		if(j>=0&&j<i-1){
			expr[j++]='\0';
			process_token(expr);
		}

	}


}
void process_id(char* str){


	if(isdigit(str[0])){

		printf(" %s\n ",str);
		return;
	}

	else{
		if((str[0]=='\'' && str[strlen(str)-1]=='\'' )||(str[0]=='\"' && str[strlen(str)-1]=='\"'))
			{
				// if(str[0]!='o' && str[1]=='x' && strlen(str)>=2)
				// {
					printf(" %s\n ",str);
				// }

			}
		// printf(" %s\n ",str);
		return;
	}

}
