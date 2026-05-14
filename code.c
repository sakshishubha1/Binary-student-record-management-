include<stdio.h>
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
    getchar();
    printf("Enter name");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter roll no");
    scanf("%d",&s.roll);
    printf("Enter marks",&s.marks);
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
     int Student s1;
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
    char name[50];
    printf("Enter name");
    scanf("%s",name);
    Student s2;
while(fread(&s2,sizeof(s2),1,fp)==1){
       if(strcmp(name,s2.name)==0){
          printf("%s %d %d",s2.name,s2.roll,s2.marks);
            }
}
fclose(fp);
}
    int main{
        printf("")

    


    
}