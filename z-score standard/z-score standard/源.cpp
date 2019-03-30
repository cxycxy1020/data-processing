#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout << "请输出数据的总个数：";
	int n, *x, i;
	float *y, mean = 0, deviation = 0; //mean代表均值 deviation代表方差
	cin >> n;
	x = new int[n];
	y = new float[n];
	cout << "请依次输入这组数据：";
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		mean += x[i];
	}
	mean /= n;
	cout << "这组数据的均值μ是：" << mean << endl;
	for (i = 0; i < n; i++)
	{
		deviation += (x[i] - mean)*(x[i] - mean);
	}
	deviation = sqrt(deviation / n);
	cout << "这组数据的标准差σ是：" << deviation << endl;
	cout << "这组数据z-score的转换结果是：" << endl;
	for (i = 0; i < n; i++)
	{
		y[i] = (x[i] - mean) / deviation;
		cout << x[i] << "-->" << y[i] << endl;
	}
}
