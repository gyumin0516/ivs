#include <stdio.h>
// �̸�(���ں�����), �ּ�(��������)�� �Է¹ޱ�
/* scanf("%s", ����, �Է¹���byte��)
     white space(��,�����̽�,����)�� ���� �� ������ ���۳����� return
     �� ó�� ������ white space�� ����
   gets(����)
     '\n'���������� �ν��ϰ� �� �ڴ� ���ۿ��� ����
*/
int main (void){
    // char* name -> �̷��� �� �� �Է¹������ڿ��� ����� ������ Ȯ������ ����
    char name[128];
    char address[512];
    printf("�̸��� >>");
    scanf("%s", name, sizeof(name));
    printf("�ּҴ� >>");
    // scanf("%s", address, sizeof(address));
    // scanf�� �տ��� �Ἥ ���� ���ۿ� \n �����ִ� ����
    // �� ���¿��� gets�� ���� \n������ ��Ʈ���� �ްԵ�
    gets(address); // ��Ʈ���� �޾Ƽ� ���۸� ���� �뵵
    gets(address);
    printf("�Է��� �̸� : %s\n", name);
    printf("�Է��� �ּ� : %s\n", address); 
}