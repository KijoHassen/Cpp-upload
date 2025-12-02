#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    float base_salary;
    float floting_bonus;
    float expense;
    float real_salary;
}Employee;//定义结构体类型Employee

int main(){

    int N;
    scanf("%d",&N);

    Employee employees[N];//定义结构体数组，相当于int arr[], char str[]
    for (int i=0; i<N; i++){
        scanf("%s %f %f %f", 
            employees[i].name, //字符数组的名字就是地址，不需要取地址符&
            &employees[i].base_salary,
            &employees[i].floting_bonus, 
            &employees[i].expense);
        employees[i].real_salary = //输入完一个人的信息后，计算该员工的实发工资
            employees[i].base_salary + 
            employees[i].floting_bonus - 
            employees[i].expense;
    }

    for(int i=0; i<N; i++){
        printf("%s %.2f\n",
            employees[i].name,
            employees[i].real_salary);
    }

    system("pause");
    return 0;
}
