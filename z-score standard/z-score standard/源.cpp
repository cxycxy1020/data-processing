#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout << "��������ݵ��ܸ�����";
	int n, *x, i;
	float *y, mean = 0, deviation = 0; //mean�����ֵ deviation������
	cin >> n;
	x = new int[n];
	y = new float[n];
	cout << "�����������������ݣ�";
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		mean += x[i];
	}
	mean /= n;
	cout << "�������ݵľ�ֵ���ǣ�" << mean << endl;
	for (i = 0; i < n; i++)
	{
		deviation += (x[i] - mean)*(x[i] - mean);
	}
	deviation = sqrt(deviation / n);
	cout << "�������ݵı�׼����ǣ�" << deviation << endl;
	cout << "��������z-score��ת������ǣ�" << endl;
	for (i = 0; i < n; i++)
	{
		y[i] = (x[i] - mean) / deviation;
		cout << x[i] << "-->" << y[i] << endl;
	}
}
