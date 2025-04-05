# App_Draw_Win2D

Win2Dを使用し、四角形などを描画するサンプルプログラムです。
<img width="958" alt="App_Draw_Win2D" src="https://github.com/user-attachments/assets/11053bb3-22d9-4ca3-ba53-7fb97097190f" />

## Win2D
事前にWin2Dをインストールします。
1. ツール(T) → NuGet パッケージマネージャー(N) → ソリューションのNuGetパッケージの管理(N)
2. Win2Dで検索
3. Win2D.uwpをインストール

* MainPage.xamlに下記を追加します。  
```
    xmlns:canvas="using:Microsoft.Graphics.Canvas.UI.Xaml"
```
    
```
    <Grid>
        <canvas:CanvasControl x:Name="MyCanvas" Draw="MyCanvas_Draw" />
    </Grid>
```

* MainPage.xaml.cppに下記を追加します。
```
using namespace Microsoft::Graphics::Canvas::UI::Xaml;
using namespace Microsoft::Graphics::Canvas;
using namespace Windows::UI;
```

## サンプル構成
* 楕円 : 位置(155, 115) 半径(80, 30) 色(赤) 線の太さ(3)
* 文字 : 位置(100, 100) 色(青)
* 四角形 : 位置(200, 400) サイズ(200, 150) 色(黒) 線の太さ(2)

# Version
Microsoft Visual Studio Community 2022 (64 ビット) Version 17.10.5
