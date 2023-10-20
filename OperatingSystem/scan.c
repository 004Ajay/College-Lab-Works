/*
For SCAN (example)
Number of request: 8
Request Order: 98 183 37 122 14 124 65 67
Head Position: 53
Total disk size: 199
Required Disance: 331 (as per lab question)
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int reqArr[50], n, head, i, pos, dsk_sz, res=0, j, len, temp;
    printf("Enter number of requests: ");
    scanf("%d", &n);
    printf("Enter requests: ");
    for(i = 1; i <= n; i++)
        scanf("%d", &reqArr[i]);
    printf("Enter head position: ");
    scanf("%d", &head);
    printf("Enter total disk size: ");
    scanf("%d", &dsk_sz);
    reqArr[0] = head; // injecting head to first position of array
    reqArr[n+1] = dsk_sz; // injecting total disk size to array end
    //sorting
    for(i=0;i<n+1;i++) {
        for(j=0;j<n+1;j++) {
            if(reqArr[j]>reqArr[j+1]) {
                temp = reqArr[j];
                reqArr[j] = reqArr[j+1];
                reqArr[j+1] = temp;
            }
        }
    }
    // position of the disk to head seeking 
    for(i=0;i<n;i++) {                                      
        if(reqArr[i] == head) {
            pos = i;
            break;
        }
    }
    res = reqArr[n+1] - reqArr[pos]; // first line difference  
    printf("Access path: %d", reqArr[pos]); //starting with head position (printing)

    for(i = pos+1; i <= n+1; i++){
        //res += abs(reqArr[i+1] - reqArr[i]);
        printf(" -> %d", reqArr[i]); //printing remaining nos in first line
    }
    for(i = pos-1; i >= 0; i--)
        printf(" -> %d", reqArr[i]); //printing remaining nos in second line
    res += abs(dsk_sz - reqArr[pos-2]);
    printf("\nTotal Distance: %d\n", res);
    return 0;
}
