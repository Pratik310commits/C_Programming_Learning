#include <stdio.h>

typedef void (*TaskCompleteCb)(char*);

void EatBreakfast(TaskCompleteCb Cb);
void TaskCompleteWash(char* str);
void ReturnHome(TaskCompleteCb Cb);
void EatDinner(TaskCompleteCb Cb);
void GoToWork(TaskCompleteCb Cb);

int main()
{
    EatBreakfast(TaskCompleteWash);
    GoToWork(TaskCompleteWash);
    ReturnHome(TaskCompleteWash);
    EatDinner(TaskCompleteWash);

    return 0;
}

void EatBreakfast(TaskCompleteCb Cb)
{
    printf("Breakfast eaten!\n");
    Cb("morning utensils");
}

void TaskCompleteWash(char* str)
{
    printf("\tWashing %s\n", str);
}

void ReturnHome(TaskCompleteCb Cb)
{
    printf("Home Sweet Home!\n");
    Cb("cothes");
}

void EatDinner(TaskCompleteCb Cb)
{
    printf("Dinner eaten!\n");
    Cb("night utensils");
}

void GoToWork(TaskCompleteCb Cb)
{
    printf("Going to work\n");
    Cb("blankets for night");
}

/* 
// return_type (*function_name)(input param1 type)
 */