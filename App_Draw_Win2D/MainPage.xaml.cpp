//
// MainPage.xaml.cpp
// MainPage クラスの実装。
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App_Draw_Win2D;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace Microsoft::Graphics::Canvas::UI::Xaml;
using namespace Microsoft::Graphics::Canvas;
using namespace Windows::UI;

// 空白ページの項目テンプレートについては、https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x411 を参照してください

MainPage::MainPage()
{
	InitializeComponent();
}

void MainPage::MyCanvas_Draw(CanvasControl^ sender, CanvasDrawEventArgs^ args)
{
    //楕円 : 位置(155, 115) 半径(80, 30) 色(赤) 線の太さ(3)
    args->DrawingSession->DrawEllipse(155, 115, 80, 30, Colors::Red, 3); //楕円

    //文字 : 位置(100, 100) 色(青)
    args->DrawingSession->DrawText("Hello, world!", 100, 100, Colors::Blue); //テキスト

    //四角形 : 位置(200, 400) サイズ(200, 150) 色(黒) 線の太さ(2)
    Windows::Foundation::Rect rect(200, 400, 200, 150);
    args->DrawingSession->DrawRectangle(rect, Colors::Black, 2.0f);
}
