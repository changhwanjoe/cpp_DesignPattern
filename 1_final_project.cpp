#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <tuple>
using namespace std;

class BaseBallGame
{
    typedef tuple<int, int, int> INPUT;
    typedef tuple<int, int> RESULT;
    vector<pair<INPUT, RESULT>> v;

public:
    BaseBallGame() { srand((unsigned)time(0)); }

    void run()
    {
        while (1)
        {
            int x = 0, y = 0, z = 0;
            do
            {
                x = rand() % 9 + 1;
                y = rand() % 9 + 1;
                z = rand() % 9 + 1;
				cout << x <<y << z;

            } while (x == y || y == z || x == z);

            cout << "당신이 생각한 숫자는 " << x
                 << "," << y << "," << z << "입니까?" << endl;
            int strike = 0, ball = 0;
            cout << "strike 갯수:";
            cin >> strike;
            if (strike == 3)
            {
                cout << " 성공 !" << endl;
                break;
            }
            cout << "ball 갯수 :";
            cin >> ball;
            v.push_back(make_pair(INPUT(x, y, z), RESULT(strike, ball)));
            dump();
        }
    }
    void dump()
    {
        printf("-----\n");
        printf("입력값s b \n");
        for (auto &p : v) // p는 pair<INPUT,RESULT> 입니다
        {
            printf("%d %d %d : %d %d \n",
                   get<0>(p.first), get<1>(p.first), get<2>(p.first), 
                   get<0>(p.second), get<1>(p.second));
        }
        printf("----\n");
    }
};

int main(void)
{
    BaseBallGame bbg;
    bbg.run();
}
///No.2
int main()
{
	//조건 1 Folder와 File의 객체를 생성 할 수 있어야 합니다. 
	Folder* rootFolder = new Folder("ROOT");
	Folder* aaaaFolder = new Folder("AAAA");
	Folder* bbbbFolder = new Folder("BBBBB");

	File* file1 = new File("a.txt",10);
	File* file2 = new File("b.txt",20);
	File* file3 = new File("c.txt",30);
	File* file4 = new File("d.txt",40);
	
	//조건 2. 폴더 안에 파일 및 다른 폴더를 넣을수 있어야 한다. 
	rootFolder->add(aaaaFolder);
	rootFolder->add(bbbbFolder);
	rootFolder->add(file1);
	
	aaaaFolder->add(file2);
	aaaaFolder->add(file3);
	
	bbbbFolder->add(file4);
	
	cout <<file1->getSize() <<endl; //10
	cout <<aaaaFolder->getSize() <<endl; //50
	cout <<rootFoler->getSize() <<endl; //100
	//조건 4 화면출력
	file->print(); //파일이므로 이름과 크기만 출력 (a.txt, 10)
	
	rootFolder->print(); // ROOT폴더 전체의 모양을 보기좋게 출력해주세요
	//[ROOT]
	//		[AAAA]
	//				(b.txt,20)
	//				(b.txt,30)
	// 		[BBBB]
	//				(d.txt,40)
	//		(a.txt,10)
	
	//조건 5. 폴더 제거 시 폴더 안에 있는 모든 파일과 폴더가 제거 되게 해주세요
	delete rootFolder;
}
	

		

//

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