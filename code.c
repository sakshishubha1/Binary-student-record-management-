#include<stdio.h>
#include<string.h>
typedef struct{
    char name[100];
    int roll;
    int marks;
}Student;
void addstudent(){
    FILE *fp=fopen("student.dat","ab");
    if(fp==NULL){
        printf("EROR OPENING FILE");
        return ;
    }
    Student s;
    printf("Enter name");
    scanf("%s",s.name);
    printf("Enter roll no");
    scanf("%d",&s.roll);
    printf("Enter marks");
    scanf("%d",&s.marks);
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    printf("Student added ");
    }
    void viewstudent(){
        FILE *fp=fopen("student.dat","rb");
        if(fp==NULL){
            printf("EROR OPENING FILE");
            return ;
        }
     printf("displaying students");
      Student s1;
    while(fread(&s1,sizeof(s1),1,fp)==1){
    printf("%s %d %d",s1.name,s1.roll,s1.marks);
    printf("--------------------");
    }
    fclose(fp);
}


void search(){
    FILE *fp=fopen("student.dat","rb");
    if(fp==NULL){
        printf("RECORD NOT FOUND");
        return ;
    }
    int found=0;
    char name[50];
    printf("Enter name");
    scanf("%s",name);
    Student s2;
while(fread(&s2,sizeof(s2),1,fp)==1){
       if(strcmp(name,s2.name)==0){
        found=1;
          printf("%s %d %d",s2.name,s2.roll,s2.marks);
            }
}
if(found==0){
    printf("record not found");
}
fclose(fp);
}
    int main(){
        while(1){
        int n;
       printf("1. Enter Data\n");
      printf("2. View All Data\n");
      printf("3. Search\n");
      printf("4. Exit\n");
      printf("Enter choice:\n ");
        scanf("%d",&n);
        switch(n){
            case 1:
            addstudent();
            break;
            case 2:
            viewstudent();
            break;
            case 3:
            search();
            break;
            case 4:
            printf("EXITING....");
            return 0;
            default:
            printf("Eror, wrong choice");
            break;
        }    
}
    }