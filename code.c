include<stdio.h>
typedef struct{
    char name[100];
    int roll no;
    int marks ;
}Student;
void addstudent(){
    FILE *fp=fopen("student.dat","ab");
    if(fp==NULL){
        printf("EROR OPENING FILE");
        return 1;
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

    int main{

    

    
}