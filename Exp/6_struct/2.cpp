#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char id[6];
    char name[10];
    int score;
    
}Student;//定义结构体类型Student

int main(){

    int N;
    scanf("%d",&N);

    Student students[N];
    double sum = 0.0, aver = 0.0;
    for(int i=0; i<N; i++){
        scanf("%s %s %d",
            students[i].id,
            students[i].name,
            &students[i].score);
        sum += students[i].score;
    }

    aver = sum / N;
    printf("Average score: %.2f\n", aver);
    for(int i=0; i<N; i++){
        if(students[i].score < aver){
            printf("Below average:%s %s %d\n",
                students[i].id,
                students[i].name,
                students[i].score);
        }
    }
    

    system("pause");
    return 0;
}
