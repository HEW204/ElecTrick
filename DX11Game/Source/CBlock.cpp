//======================================================================
//												CBlock.cpp
//	ブロック
//
//======================================================================
//	author :	AT12A 05 宇佐美晃之
//======================================================================
//	開発履歴
//	2020/11/16	作成
//
//======================================================================


//===== インクルード部 =====
#include "CBlock.h"
#include "CCollision2D.h"
#include "CRigidbody2D.h"
#include "CBlockComponent.h"


//===== マクロ定義 =====


//===== プロトタイプ宣言 =====


//===== グローバル変数 =====


//===== 静的メンバ =====


//===================================
//
//	コンストラクタ
//
//===================================
CBlock::CBlock()
{
	// トランスフォーム
	m_pTrans->SetScale({ 100, 100, 300 });


	// タグの設定
	m_name = m_tag = "Block";


	//--- コンポーネントの追加
	const auto& col = AddComponent<CCollision2D>();
	const auto& rb = AddComponent<CRigidbody2D>();
	AddComponent<CBlockComponent>();

	// コリジョン
	col->SetScale({ 100, 100, 100 });

	// リジッドボディ
	rb->SetSolid(true);
	rb->SetUseGravity(false);

}

//===================================
//
//	デストラクタ
//
//===================================
CBlock::~CBlock()
{

}

