#include <stdio.h>

void gradingStudents(int grades_count, int* grades);

int main() {
    int n;
    scanf("%d", &n);
    int grades[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }
    gradingStudents(n, grades);
    return 0;
}

void gradingStudents(int grades_count, int* grades) 
{
    int result_cont[grades_count], i;
    int next_multiple;
    for (i = 0; i < grades_count; i++) 
    {
        if (grades[i] < 38) 
        {
            result_cont[i] = grades[i];
        } 
        else 
        {
            next_multiple = (grades[i] / 5 + 1) * 5; 
            if (next_multiple - grades[i] < 3) 
            {
                result_cont[i] = next_multiple; 
            } 
            else 
            {
                result_cont[i] = grades[i];
            }
        }
        printf("%d\n", result_cont[i]);
    }
}
