    #include <stdio.h>
    struct student
    {
        char name[30];
        int rollno;
        float marks;
    };
    int main()
    {
        struct student s1;
        struct student s2;

        printf("Enter name of first student -> ");
        scanf("%s",&s1.name);
        printf("Enter roll no. of first student -> ");
        scanf("%d",&s1.rollno);
        printf("Enter marks of first student -> ");
        scanf("%f",&s1.marks);

        printf("Enter name of second student ->");
        scanf("%s",&s2.name);
        printf("Enter roll no. of second student -> ");
        scanf("%d",&s2.rollno);
        printf("Enter marks of second student -> ");
        scanf("%f",&s2.marks);

        printf("\n \n \n");

        printf("Name -> %s\n",s1.name);
        printf("Roll no. -> %d\n",s1.rollno);
        printf("Marks -> %.2f\n",s1.marks);

        printf("\n");

        printf("Name -> %s\n",s2.name);
        printf("Roll no. -> %d\n",s2.rollno);
        printf("Marks -> %.2f\n",s2.marks);

        return 0;
    }