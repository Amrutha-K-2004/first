//PRIORITY SCHEDULING 
#include<stdio.h>  
#include<stdlib.h>  
struct process {  
    int process_id;  
    int burst_time;  
    int priority;  
    int waiting_time;  
    int turnaround_time;  
};  

void priority_scheduling(struct process proc[], int n) {
    int i, j;
    struct process temp;  

    for(i = 0; i < n - 1; i++) {  
        for(j = 0; j < n - i - 1; j++) {  
            if(proc[j].priority > proc[j + 1].priority) {  
                temp = proc[j];  
                proc[j] = proc[j + 1];  
                proc[j + 1] = temp;  
            }  
        } 
    }  
  
    int wt[10], tat[10], total_wt = 0, total_tat = 0;  
    wt[0] = 0;  
  
    for(i = 1; i < n; i++) {  
        wt[i] = proc[i - 1].burst_time + wt[i - 1];  
    }  

    for(i = 0; i < n; i++) {  
        tat[i] = proc[i].burst_time + wt[i];  
    }  
  
    printf("\nProcess ID\tBurst Time\tPriority\tWaiting Time\tTurnaround Time");  
  
    for(i = 0; i < n; i++) {  
        total_wt = total_wt + wt[i];  
        total_tat = total_tat + tat[i];  
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", proc[i].process_id, proc[i].burst_time, proc[i].priority, wt[i], tat[i]);  
    }  
  
    printf("\n\nAverage Waiting Time = %f", (float)total_wt / n);  
    printf("\nAverage Turnaround Time = %f\n", (float)total_tat / n);  
}  

int main() {  
    int n, i;  
    struct process proc[10];  
  
    printf("Enter the number of processes: ");  
    scanf("%d", &n);  
  
    for(i = 0; i < n; i++) {  
        printf("\nEnter the process ID: ");  
        scanf("%d", &proc[i].process_id);  
  
        printf("Enter the burst time: ");  
        scanf("%d", &proc[i].burst_time);  
  
        printf("Enter the priority: ");  
        scanf("%d", &proc[i].priority);  
    }  
  
    priority_scheduling(proc, n);  
    return 0;  
}  
