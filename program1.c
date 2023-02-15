# include<stdio.h>
#include<string.h>

typedef struct students{
    char str_name[20];
    char str_roll_no[15];
    char str_branch_name[10];
     int phone_no[20];
}students;

int main(){
students stud[5];
int i;
for(i=0;i<5;i++)
{
    printf("enter student name\n");
    scanf("%s",stud[i].str_name);

    printf("enter branch name\n");
    scanf("%s",stud[i].str_branch_name);

    printf("enter roll_no\n");
    scanf("%s",stud[i].str_roll_no);//_>

    printf("enter phone no\n");
    scanf("%d", &stud[i].phone_no);


}
for(i=0;i<5;i++){
    if(i==1 || i==3 ){
        strcpy(stud[i].str_branch_name, "new branch");
    }
}
return 0;
}
// output1
enter student name
aditya
enter branch name
cse
enter roll_no
S202000001
enter phone no
789065432


