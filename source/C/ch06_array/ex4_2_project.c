#include <stdio.h>
#include <string.h>
int main(void){
    char* names[] = {"������", "������", "������", "���밥", "������"};
    int heights[5]; 
    int tot_height = 0;
    int idx_min, min_height=999;
    int idx_max, max_height=-1; 
    for (int idx=0;idx<5;idx++){
        printf("%s�� Ű��?\n", names[idx]);
        scanf("%d", &heights[idx]);
        if (heights[idx]<=min_height||heights[idx]>=max_height){
            printf("Ű�� �߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.");
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
    printf("���Ű : %.2lf\n", tot_height/5.0);
    printf("����� ģ�� %s�� Ű�� %d\n", names[idx_max], heights[idx_max]);
    printf("�ִܽ� ģ�� %s�� Ű�� %d\n", names[idx_min], heights[idx_min]);
    

}