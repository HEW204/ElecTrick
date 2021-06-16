//==================================================================
//												ISystem.cpp
//	システムベース
//
//==================================================================
//	author :	AT12A 05 宇佐美晃之
//==================================================================
//	開発履歴
//
//	2020/12/22	システムクラス作成
//
//===================================================================


//===== インクルード部 =====
#include "ISystem.h"
#include "../World/World.h"
#include <algorithm>

using namespace ECS;


//===== マクロ定義 =====


//===== プロトタイプ宣言 =====


//===== グローバル変数 =====



//===================================
//
//	コンストラクタ
//
//===================================
ISystem::ISystem(World* pWorld)
	: m_pWorld(pWorld),
	m_nUpdateOrder(-1),
	m_nTypeID(-1)
{
}


//===================================
//
//	デストラクタ
//
//===================================
ISystem::~ISystem()
{
}


//===================================
//
//	生成時コールバック
//
//===================================
void ISystem::OnCreate()
{
}

//===================================
//
//	削除時コールバック
//
//===================================
void ISystem::OnDestroy()
{
}

//===================================
//
//	エンティティマネージャーの取得
//
//===================================
EntityManager* ISystem::GetEntityManager()
{ 
	return m_pWorld->GetEntityManager();
}