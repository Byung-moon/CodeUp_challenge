// 1098 : [����-2�����迭] �������� �̱�

#include <iostream>
#include <string.h>   //memset �Լ� ����ϱ� ���� include, #include <string>���� �ٸ�

using namespace std;

int main()
{
    int height, width, numOfSticks, length, direction, x, y;
   
    cin >> height >> width;
    cin >> numOfSticks;

    //short matrixOfSticks[height][width] = {}; �̷������� height, width ���� ��������� �ȵ� --> �����Ҵ��� �������
    
    // height X width�� ũ�⸦ ���� 2���� �迭 ���� �Ҵ�
    short** matrixOfSticks = new short*[height]{ };

    for (int i = 0; i < height; i++)
    {
        matrixOfSticks[i] = new short[width];
        memset(matrixOfSticks[i], 0, sizeof(short)*width);
    }
    
    // ����� ����, ����, ���� ��(x,y)�� �ް� �׿� ���� �� ��ȭ
    for (int i = 0; i < numOfSticks; i++)
    {
        cin >> length >> direction >> x >> y;

        if(direction == 0)
        {
            for (int j = 0; j < length; j++)
            {
                matrixOfSticks[x-1][y-1+j] = 1;
            }
        }
        else
        {
            for (int k = 0; k < length; k++)
            {
                matrixOfSticks[x-1+k][y-1] = 1;
            }
        } 
    }
    
    // ����Ⱑ ���� matrix ���� ���
    for (int i = 0; i< height; i++)
    {
        for (int j = 0; j < width ; j++)
        {
            cout << matrixOfSticks[i][j] << " ";
        }
        cout << endl;
    }

    // �޸� ����
    for (int i = 0; i < height; i++)
    {
        delete [] matrixOfSticks[i];
    }
    delete [] matrixOfSticks;
    
}