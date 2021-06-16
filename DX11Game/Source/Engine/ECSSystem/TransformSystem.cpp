//==================================================================
//												TransformSystem.cpp
//	トランスフォーム管理システム
//
//==================================================================
//	author :	AT12A 05 宇佐美晃之
//==================================================================
//	開発履歴
//
//	2020/12/23	トランスフォームシステム作成
//
//===================================================================


//===== インクルード部 =====
#include "TransformSystem.h"
#include "../ECSCompoent/Transform.h"
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
TransformSystem::TransformSystem(World* pWorld)
	: System<Transform>(pWorld)
{
	// 更新順
	SetUpdateOrder(UpdateOrder::eTransform);
}


//===================================
//
//	デストラクタ
//
//===================================
TransformSystem::~TransformSystem()
{
}


//===================================
//
//	生成時コールバック
//
//===================================
void TransformSystem::OnCreate()
{
}

//===================================
//
//	更新時コールバック
//
//===================================
void TransformSystem::OnLateUpdate()
{
	std::for_each(m_ComponentList.begin(), m_ComponentList.end(),
		[](Transform* trans)
		{
			trans->UpdateMatrix();
		});
}

//===================================
//
//	削除時コールバック
//
//===================================
void TransformSystem::OnDestroy()
{
}
