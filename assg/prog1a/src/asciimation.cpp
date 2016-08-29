#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <time.h>
#include "color.h"
using namespace std;

#define N 25
#define M 60

void board(int x, int y) {
	int i, j, k;
	for (i=0; i<=N; i++) {
	    for (j=0; j<=M; j++) 
		               if (i==y   && j==x)   cout << color::yellow << '*';
		          else if (i==y   && M-j==x) cout << color::green  << '*';
		          else if (N-i==y && j==x)   cout << color::red    << '*';
		          else if (N-i==y && M-j==x) cout << color::blue   << '*';
	            else if (i==0)             cout << color::black << '=';
	            else if (j==0)             cout << color::black << '|';
	            else if (i==N)             cout << color::black << '=';
	            else if (j==M)             cout << color::black << '|';
	            else                       cout << ' ';
	    cout << endl;
      k = (k + 1) % 60;
	}
	return;
}

int main() {
	srand(time(NULL));
	int x= rand()%M, dx=rand()%2,
	    y= rand()%N, dy=rand()%2;
	dx = (dx==0) ? 1 : -1;
	dy = (dy==0) ? 1 : -1;
	while (true) {
		cout << string(80, '\n');
		if (x==0 || x==M) dx *= -1;
		if (y==0 || y==N) dy *= -1;
		board(x+=dx, y+=dy);
		usleep(33333);
	}	
	return 0;
}
