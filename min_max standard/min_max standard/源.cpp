#include <iostream>
using namespace std;
int main()
{
	cout << "请输入数据的个数：";
	int n, *x, i, x_min, x_max;
	float *y;
	cin >> n;
	x = new int[n];
	y = new float[n];
	cout << "请依次输入数据：";
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		//将x_min和x_max初始化
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
	cout << "这组数据的最大值max是：" << x_max<<endl;
	cout << "这组数据的最小值min是：" << x_min << endl;
	cout << "这组数据max_min标准化的结果是：" << endl;
	for (i = 0; i < n; i++)
	{
		y[i] = (float)(x[i] - x_min) / (x_max - x_min);
		cout << x[i] << "-->" << y[i] << endl;
	}
}
