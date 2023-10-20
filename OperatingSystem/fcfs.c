/*
Sample I/O for 'First Come First Served Disk Scheduling (FCFS)'
Number of request: 8
Request Order: 98 183 37 122 14 124 65 67
Head Position: 53
Required Disance: 640 (as per lab question)
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, req_num, req[50], mov=0, head;
    printf("Enter number of requests: ");
    scanf("%d", &req_num);
    printf("Enter request order: ");
    for(i = 0; i < req_num; i++)
        scanf("%d", &req[i]);
    printf("Enter head position: ");
    scanf("%d", &head);
    mov = mov + abs(head - req[0]); // abs() - to calculate absolute value
    printf("Access path: %d -> %d", head, req[0]);
    for(i = 1; i < req_num; i++){
        mov = mov + abs(req[i]-req[i-1]);
        printf(" -> %d", req[i]);
    }
    printf("\n");
    printf("Total Distance: %d\n",mov);
    return 0;
}
