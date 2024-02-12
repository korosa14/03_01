#include <Novice.h>
#include"GameManage.h"

const char kWindowTitle[] = "LE2D_05_カツラギ_ウトウ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* Gamemanager = new GameManager();
	Gamemanager->Run();

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
