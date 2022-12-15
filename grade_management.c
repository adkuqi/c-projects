#include <stdio.h>
#include <stdlib.h>

int readGrade();
void showGrades(int[], int );
void showFrequency(int[], int);
float average(int grades[],int gradeCount);
int noParticipation(int grades[], int gradeCount);

int main() {

    int gradeCount = 10;
    int grades[gradeCount];

    for(int i = 0; i < gradeCount; i++){
        printf("Please enter the %dth grade: \n",i + 1);
        grades[i] = readGrade();
    }

    int choice;
    do {
    printf("Write 1 for 'grade overview', 2 for 'average', 3 for 'no participation', 4 for 'frequency', 5 for 'update' oder 6 for 'stop': \n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: 
            showGrades(grades,gradeCount);
            break;
        case 2:
            float avrg = average(grades, gradeCount);
            printf("The average is: %.2f.\n",avrg);
            break;
        case 3:
            int notParticipated = noParticipation(grades, gradeCount);
            printf("%d students did not participate.\n",notParticipated);
            break;
        case 4:
            showFrequency(grades,gradeCount);
            break;
        case 5:
            printf("Which grade do you want to update?\n");
            int gradePosition;
            scanf("%d", &gradePosition);
            printf("Enter the new grade: \n");
            int newGrade = readGrade();
            grades[gradePosition] = newGrade;
            break;
        case 6:
            printf("Bye!\n");
            break;
        default:
            printf("Please correct the input!\n");
            break;
    }
    } while(choice != 6);
    system("pause\n");
    return 0;
}

void showFrequency(int grades[], int gradeCount) {
    int frequency[6];
    for(int i=0;i<6;i++){
        frequency[i] = 0;
    }
    for(int i = 0; i < gradeCount; i++) {
        frequency[ grades[i] ]++;
    }
    for(int i = 0; i < 6; i++){
        printf("Grade %d occurs %d times.\n",i,frequency[i]);
    }    
}

int noParticipation(int grades[], int gradeCount){
    int count = 0;
    for(int i = 0; i < gradeCount; i++) {
        if(grades[i] == 0){
            count++;
        }
    }
    return count;
}

float average(int grades[],int gradeCount){
    float sum = 0;
    int validGrades = 0;
    for(int i = 0; i < gradeCount; i++) {
        if(grades[i] != 0) {  
            sum += grades[i];         
            validGrades++;
        }
    }
    return sum / validGrades;
}

void showGrades(int grades[], int gradeCount){
    for(int i = 0; i < gradeCount; i++){
        printf("Grade #%d is: %d \n",i,grades[i]);
    }
}

int readGrade(){
    int input;
    do{
        scanf("%d", &input);
        if(input < 0 || input > 5){
            printf("This grade is not valid. Please enter a valid grade: \n");
        }
    }while(input < 0 || input > 5);
    return input;
}