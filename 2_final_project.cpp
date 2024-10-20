
///No.2
#include <iostream>
#include <string>

using namespace std;

class Folder
{
private:
    string Name = "";

    /* data */
public:
    Folder(string Name);
    ~Folder();
    add(Folder* folder){

    }
};

Folder::Folder(string Name)
{
    this.Name = Name;
}

Folder::~Folder()
{
}

Folder::add()


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