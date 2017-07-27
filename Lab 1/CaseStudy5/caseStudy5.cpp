#include <algorithm>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <iostream>

using namespace std;
int M,C,price[25][25];
//1
int shop( int money, int g){
	if (money < 0 ) return -1000000000;
	if ( g== C) return M - money;
	//2
	int ans = -1;
	for (int model =1; model <= price[g][0]; model++ )
		ans = max(ans, shop(money - price[g][money], g+1));
	return ans;
	//3
 }

int main(){
	int i,j,TC,score;
	i = 0,j=0,TC=0;
	fflush(stdout);

	cin >> TC;
	while (TC--){
		scanf("%d %d", &M, &C);
		for (i = 0;i<C;i++ ){
			scanf("%d", &price[i][0]);
			for (j=1; j<= price[i][0]; j++ )
				scanf ("%d", &price[i][j]);

	}
	//4
	score = shop(M,0);
	if (score < 0 ) printf(" no solution\n");
	else
		printf("%d\n", score);
	}
}
