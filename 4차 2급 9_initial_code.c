// ������ ���� include�� ����� �� �ֽ��ϴ�.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	int i=0,j=0;
	int red;
	int padding[6][6];
	
	for (int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			padding[i][j]=10;	
		}	
	}

	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(i+1<=height_len&&j+1<=height_len)
				padding[i+1][j+1]=height[i][j];
		}
	}

	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			red=padding[i][j]; 
			if(red<padding[i][j-1]&&red<padding[i][j+1]&&red<padding[i-1][j]&&red<padding[i+1][j]){
				count+=1;
			}
		}
	}

	return count;

}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int height[4][4] = {{3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9}};
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
