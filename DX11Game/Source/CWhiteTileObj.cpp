//======================================================================
//												CWhiteTileObj.cpp
//	エンディングの白背景用オブジェクト
//
//======================================================================
//	author :	AT12A 15 榊原龍我
//======================================================================
//	開発履歴
//	2021/01/22 作成
//
//======================================================================


//===== インクルード部 =====
#include "CWhiteTileObj.h"

//===== マクロ定義 =====


//===== プロトタイプ宣言 =====


//===== グローバル変数 =====


//===================================
//
//	コンストラクタ
//
//===================================
CWhiteTileObj::CWhiteTileObj()
{
	// トランスフォーム
	m_pTrans;

	// タグの設定
	m_name = m_tag = "CWhiteTile";


}

//===================================
//
//	デストラクタ
//
//===================================
CWhiteTileObj::~CWhiteTileObj()
{

}
