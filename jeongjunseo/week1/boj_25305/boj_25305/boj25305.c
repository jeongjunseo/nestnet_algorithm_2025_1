#include <stdlib.h>
//qsort�Լ� �����Լ�
int compare(const int* a, const int* b) {
    return(*a - *b);    //return���� ����̸� qsort�Լ��� �� ���� �ڸ��� �ٲٰ�, �����̸� �ڸ��� �ٲ��� ����.
}
int main() {
    int N, k;
    int score[1000];
    scanf("%d %d", &N, &k);

    for (int i = 0;i < N;i++) {
        scanf("%d", &score[i]);
    }

    qsort(score, N, sizeof(int), compare);

    printf("%d", score[N - k]);
}