// ʹ���ⲿ���� -- 12.4
#include <stdio.h>
int units = 0; // �ⲿ����
void critic(void);
int main(void)
{
    extern int units; // ��ѡ���ظ�����
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    // ɾ���˿�ѡ���ظ�����
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}
