// No.3 
#include <iostream>
#include <list>
using nameapce std;
int main()
{
	Queue<int> q;
	q.Push(10);
	q.Push(20);
	cout << s.Pop() <<endl;//1
	cout << s.Pop() <<endl; //20	
}

//Queue 를 완전히 새로 만들 필요 없이 STL의 List를 사용하면 간단하게 마들수 있다. STL 의 List 를 사용해서 위 코드에서 사용할 수 있는 QUEUE Adpater 를 마들어보세요
// 클래스 어댑터로 만들어보시오
// 객체 어댑터로 만들어 보시오 