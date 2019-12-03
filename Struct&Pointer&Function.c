#include <stdio.h>
#include <string.h>
#define n 10
struct student_info
{
    int ID;
    char Name[n + 1];
    char Gender;
    float Mid_S;
    float Final_S;
};
void printstudent_info(struct student_info *info);
int main()
{
    struct student_info one;
    struct student_info three;
    struct student_info five;
    struct student_info six;

    one.ID = 1;
    strcpy(one.Name, "Joe");
    one.Gender = 'M';
    one.Mid_S = 2.5;
    one.Final_S = 4.5;

    three.ID = 3;
    strcpy(three.Name, "Mint");
    three.Gender = 'F';
    three.Mid_S = 4;
    three.Final_S = 5;

    five.ID = 5;
    strcpy(five.Name, "Faye");
    five.Gender = 'F';
    five.Mid_S = 9;
    five.Final_S = 8.5;

    six.ID = 6;
    strcpy(six.Name, "Dark");
    six.Gender = 'M';
    six.Mid_S = 5.5;
    six.Final_S = 5.5;

    printstudent_info(&one);
    printstudent_info(&three);
    printstudent_info(&five);
    printstudent_info(&six);
    return 0;
}
void printstudent_info(struct student_info *info)
{
    printf("%d %s %c %.1f %.1f\n", info->ID, info->Name, info->Gender, info->Mid_S, info->Final_S);
}