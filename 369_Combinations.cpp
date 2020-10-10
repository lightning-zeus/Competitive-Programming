
#include<cstdio>
 
int main()
{
	int N, M, i;
	double C;
	while (scanf("%d%d", &N, &M), N)
	{
		C = 1.0;
		for (i = N; i > N - M; --i) C *= (double)i;
		for (i = 2; i <= M; ++i) C /= (double)i;
		printf("%d things taken %d at a time is %.0f exactly.\n", N, M, C);
		cout<<endl;
	}
	return 0;
}
