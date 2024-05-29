#include <stdio.h>
#include <string.h>
int main(void){
    char* names[] = {"유수민", "김현식", "땅땅이", "새대갈", "슘당이"};
    int heights[5]; 
    int tot_height = 0;
    int idx_min, min_height=999;
    int idx_max, max_height=-1; 
    for (int idx=0;idx<5;idx++){
        printf("%s의 키는?\n", names[idx]);
        scanf("%d", &heights[idx]);
        if (heights[idx]<=min_height||heights[idx]>=max_height){
            printf("키를 잘못입력하셨습니다. 다시 입력해주세요.");
            idx--;
            continue;
        }
        tot_height+=heights[idx];
        if (heights[idx]<min_height){
            idx_min = idx;
            min_height = heights[idx];
        }
        if (heights[idx]>max_height){
            idx_max = idx;
            max_height = heights[idx]; 
        }
    }
    printf("평균키 : %.2lf\n", tot_height/5.0);
    printf("최장신 친구 %s의 키는 %d\n", names[idx_max], heights[idx_max]);
    printf("최단신 친구 %s의 키는 %d\n", names[idx_min], heights[idx_min]);
    

}