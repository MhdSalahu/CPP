#include<iostream>
using namespace std;
void tower_of_hanoi(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n>0)
	{
		tower_of_hanoi(n-1,from_rod,aux_rod,to_rod);
		cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<"\n";
		tower_of_hanoi(n-1,aux_rod,to_rod,from_rod);
	}
}
int main()
{
	int n=3;
	tower_of_hanoi(n,'A','C','B');
	return 0;
}
