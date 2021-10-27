#include <stdio.h>
int main(void) 
{
    float pintuo;
    float bei;
    float angsi;
    float tangshao;
    float chashao;
    printf("请输入杯数：");
    scanf("%f", &bei);
    pintuo = bei /2;
    angsi = bei * 8;
    tangshao = angsi * 2;
    chashao = tangshao * 3;

    printf("等价容量为：%.2f品脱，%.2f盎司，%.2f汤勺，%.2f茶勺", pintuo, angsi, tangshao, chashao);
    return 0;
}