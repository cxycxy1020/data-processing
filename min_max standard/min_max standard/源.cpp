#include <iostream>
using namespace std;
int main()
{
	cout << "���������ݵĸ�����";
	int n, *x, i, x_min, x_max;
	float *y;
	cin >> n;
	x = new int[n];
	y = new float[n];
	cout << "�������������ݣ�";
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		//��x_min��x_max��ʼ��
		if(i==0)
		{
			x_min = x[i];
			x_max = x[i];
		}
		if (x[i] > x_max)
			x_max = x[i];
		if (x[i] < x_min)
			x_min = x[i];
	}
	cout << "�������ݵ����ֵmax�ǣ�" << x_max<<endl;
	cout << "�������ݵ���Сֵmin�ǣ�" << x_min << endl;
	cout << "��������max_min��׼���Ľ���ǣ�" << endl;
	for (i = 0; i < n; i++)
	{
		y[i] = (float)(x[i] - x_min) / (x_max - x_min);
		cout << x[i] << "-->" << y[i] << endl;
	}
}
